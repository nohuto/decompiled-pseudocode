/*
 * XREFs of SbpDetermineDllContext @ 0x18000E3A8
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18000ECD0 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     SbGetContextDetailsById @ 0x18000EF34 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18000EF5C (SbGetContextDetailsByGuid.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     SbGetContextDetailsByVersion @ 0x18007C2E0 (SbGetContextDetailsByVersion.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007CCAC (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  _BYTE *v9; // r11
  __int64 v10; // r14
  _DWORD *v11; // rdi
  _DWORD *v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[512]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0;
  v16 = 512LL;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = v17;
  if ( a2 && a1 )
  {
    v5 = RtlImageNtHeader(a1);
    LOWORD(v6) = *(_WORD *)(v5 + 72);
    LOWORD(v7) = *(_WORD *)(v5 + 74);
    SbGetContextDetailsById(4LL, &v15);
    if ( (unsigned __int16)v6 > *(_WORD *)(v15 + 20)
      || (_WORD)v6 == *(_WORD *)(v15 + 20) && (unsigned __int16)v7 >= *(_WORD *)(v15 + 22) )
    {
      *a2 = v15;
    }
    else
    {
      if ( (unsigned int)SbpRetrieveCompatibilityManifest(a1, &v12, &v16) )
      {
        v9 = v12;
        if ( v12 )
        {
          v7 = ((unsigned __int16)v6 << 16) + (unsigned __int16)v7;
          if ( *v12 )
          {
            v10 = (unsigned int)*v12;
            v11 = v12 + 1;
            do
            {
              if ( v11[4] == 1
                && (unsigned int)SbGetContextDetailsByGuid(v11, &v13)
                && *(unsigned __int16 *)(v13 + 22) + (*(unsigned __int16 *)(v13 + 20) << 16) >= v7 )
              {
                v7 = *(unsigned __int16 *)(v13 + 22) + (*(unsigned __int16 *)(v13 + 20) << 16);
              }
              v11 += 5;
              --v10;
            }
            while ( v10 );
          }
          if ( v9 != v17 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v12);
          v6 = HIWORD(v7);
        }
      }
      SbGetContextDetailsByVersion((unsigned __int16)v6, (unsigned __int16)v7, &v14);
      *a2 = v14;
    }
    return 1;
  }
  return v2;
}
