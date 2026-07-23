/*
 * XREFs of SbpDetermineDllContext @ 0x180041658
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x180041A50 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     SbGetContextDetailsById @ 0x180041C90 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x180041CB8 (SbGetContextDetailsByGuid.c)
 *     SbGetContextDetailsByVersion @ 0x180042F34 (SbGetContextDetailsByVersion.c)
 *     SbpRetrieveCompatibilityManifest @ 0x180043E78 (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(PACTIVATION_CONTEXT ActivationContext, _QWORD *a2)
{
  unsigned int v2; // ebx
  PIMAGE_NT_HEADERS v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned int *v9; // r11
  __int64 v10; // r14
  int *v11; // rdi
  __int64 v12; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF

  v2 = 0;
  v14[1] = 512LL;
  v14[0] = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( a2 && ActivationContext )
  {
    v5 = RtlImageNtHeader(ActivationContext);
    LOWORD(v6) = v5->OptionalHeader.MajorSubsystemVersion;
    LOWORD(v7) = v5->OptionalHeader.MinorSubsystemVersion;
    SbGetContextDetailsById(4LL, v14);
    if ( (unsigned __int16)v6 > *(_WORD *)(v14[0] + 20LL)
      || (_WORD)v6 == *(_WORD *)(v14[0] + 20LL) && (unsigned __int16)v7 >= *(_WORD *)(v14[0] + 22LL) )
    {
      *a2 = v14[0];
    }
    else
    {
      if ( (unsigned int)SbpRetrieveCompatibilityManifest(ActivationContext) )
      {
        v9 = &v15;
        if ( &v15 )
        {
          v7 = ((unsigned __int16)v6 << 16) + (unsigned __int16)v7;
          if ( v15 )
          {
            v10 = v15;
            v11 = &v16;
            do
            {
              if ( v11[4] == 1
                && (unsigned int)SbGetContextDetailsByGuid(v11, &v12)
                && *(unsigned __int16 *)(v12 + 22) + (*(unsigned __int16 *)(v12 + 20) << 16) >= v7 )
              {
                v7 = *(unsigned __int16 *)(v12 + 22) + (*(unsigned __int16 *)(v12 + 20) << 16);
              }
              v11 += 5;
              --v10;
            }
            while ( v10 );
          }
          if ( v9 != &v15 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, &v15);
          v6 = HIWORD(v7);
        }
      }
      SbGetContextDetailsByVersion((unsigned __int16)v6, (unsigned __int16)v7, &v13);
      *a2 = v13;
    }
    return 1;
  }
  return v2;
}
