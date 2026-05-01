/*
 * XREFs of MemUtilQueryProcessProcessModified @ 0x180038E44
 * Callers:
 *     MemUtilQueryProcessMetrics @ 0x18000382C (MemUtilQueryProcessMetrics.c)
 * Callees:
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     MemUtilGetNextRegionInfo @ 0x180038A54 (MemUtilGetNextRegionInfo.c)
 *     MemUtilQueryProcessVaCommon @ 0x180038F98 (MemUtilQueryProcessVaCommon.c)
 *     MemUtilVAQueryCtxIssue @ 0x18003918C (MemUtilVAQueryCtxIssue.c)
 *     MemUtilVAQueryCtxStart @ 0x180039204 (MemUtilVAQueryCtxStart.c)
 */

__int64 __fastcall MemUtilQueryProcessProcessModified(DWORD dwProcessId, _QWORD *a2)
{
  unsigned int ProcessVaCommon; // ebx
  __int64 v5; // r8
  unsigned int v6; // esi
  unsigned __int64 i; // rdx
  unsigned int NextRegionInfo; // eax
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v14; // [rsp+20h] [rbp-60h]
  unsigned __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  int v16; // [rsp+34h] [rbp-4Ch]
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  _BYTE v19[32]; // [rsp+48h] [rbp-38h] BYREF
  LPVOID lpAddress; // [rsp+68h] [rbp-18h]
  unsigned int v21; // [rsp+70h] [rbp-10h]
  __int64 v22; // [rsp+C8h] [rbp+48h] BYREF

  memset_0(v19, 0, 0x30uLL);
  v22 = 0LL;
  ProcessVaCommon = MemUtilQueryProcessVaCommon(dwProcessId);
  if ( ProcessVaCommon )
    goto LABEL_20;
  ProcessVaCommon = MemUtilVAQueryCtxStart(v19, 0LL, v5, &v22);
  if ( ProcessVaCommon )
    goto LABEL_20;
  v6 = v21;
  for ( i = 0LL; ; i = v10 + v9 )
  {
    NextRegionInfo = MemUtilGetNextRegionInfo(0LL, i, v14, &v15);
    ProcessVaCommon = NextRegionInfo;
    if ( NextRegionInfo )
      break;
    if ( v16 == 0x20000 && v18 )
    {
      v9 = v15;
      v10 = v17;
      v11 = v17 + v15;
      if ( v15 >= v17 + v15 )
        continue;
      do
      {
        v12 = v6++;
        v21 = v6;
        *((_QWORD *)lpAddress + 2 * v12) = v9;
        if ( v6 == 4096 )
        {
          ProcessVaCommon = MemUtilVAQueryCtxIssue(v19);
          if ( ProcessVaCommon )
            goto LABEL_20;
          v6 = v21;
        }
        v9 += 4096LL;
      }
      while ( v9 < v11 );
    }
    v10 = v17;
    v9 = v15;
  }
  if ( NextRegionInfo == 259 )
  {
    if ( !v6 || (ProcessVaCommon = MemUtilVAQueryCtxIssue(v19)) == 0 )
      ProcessVaCommon = 0;
    if ( !ProcessVaCommon )
      *a2 = v22;
  }
LABEL_20:
  if ( lpAddress )
    VirtualFree(lpAddress, 0LL, 0x8000u);
  return ProcessVaCommon;
}
