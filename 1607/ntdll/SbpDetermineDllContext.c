/*
 * XREFs of SbpDetermineDllContext @ 0x18002E2F4
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002E6DC (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     SbpRetrieveCompatibilityManifest @ 0x18002AF3C (SbpRetrieveCompatibilityManifest.c)
 *     SbGetContextDetailsById @ 0x18002E920 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18002E948 (SbGetContextDetailsByGuid.c)
 *     SbGetContextDetailsByVersion @ 0x18002EDAC (SbGetContextDetailsByVersion.c)
 *     RtlImageNtHeader @ 0x180031C10 (RtlImageNtHeader.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(PACTIVATION_CONTEXT ActivationContext, _QWORD *a2)
{
  unsigned int v2; // ebx
  PIMAGE_NT_HEADERS v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  _BYTE *v9; // r11
  __int64 v10; // r14
  char *v11; // rdi
  PVOID BaseAddress; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  SIZE_T v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[512]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0;
  v16[0] = 512LL;
  v13 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  BaseAddress = v17;
  if ( a2 && ActivationContext )
  {
    v5 = RtlImageNtHeader(ActivationContext);
    LOWORD(v6) = v5->OptionalHeader.MajorSubsystemVersion;
    LOWORD(v7) = v5->OptionalHeader.MinorSubsystemVersion;
    SbGetContextDetailsById(4LL, &v13);
    if ( (unsigned __int16)v6 > *(_WORD *)(v13 + 20)
      || (_WORD)v6 == *(_WORD *)(v13 + 20) && (unsigned __int16)v7 >= *(_WORD *)(v13 + 22) )
    {
      *a2 = v13;
    }
    else
    {
      if ( (unsigned int)SbpRetrieveCompatibilityManifest(ActivationContext, &BaseAddress, v16) )
      {
        v9 = BaseAddress;
        if ( BaseAddress )
        {
          v7 = ((unsigned __int16)v6 << 16) + (unsigned __int16)v7;
          if ( *(_DWORD *)BaseAddress )
          {
            v10 = *(unsigned int *)BaseAddress;
            v11 = (char *)BaseAddress + 4;
            do
            {
              if ( *((_DWORD *)v11 + 4) == 1
                && (unsigned int)SbGetContextDetailsByGuid(v11, &v14)
                && *(unsigned __int16 *)(v14 + 22) + (*(unsigned __int16 *)(v14 + 20) << 16) >= v7 )
              {
                v7 = *(unsigned __int16 *)(v14 + 22) + (*(unsigned __int16 *)(v14 + 20) << 16);
              }
              v11 += 20;
              --v10;
            }
            while ( v10 );
          }
          if ( v9 != v17 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          v6 = HIWORD(v7);
        }
      }
      SbGetContextDetailsByVersion((unsigned __int16)v6, (unsigned __int16)v7, &v15);
      *a2 = v15;
    }
    return 1;
  }
  return v2;
}
