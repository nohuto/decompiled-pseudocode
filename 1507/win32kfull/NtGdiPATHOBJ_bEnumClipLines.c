/*
 * XREFs of NtGdiPATHOBJ_bEnumClipLines @ 0x1C02AF4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C0001D50 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02A98D4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

_BOOL8 __fastcall NtGdiPATHOBJ_bEnumClipLines(__int64 a1, unsigned int a2, volatile void *a3)
{
  unsigned __int64 v4; // r13
  BOOL v6; // r14d
  struct _CLIPLINE *v7; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v10; // rbx
  _BOOL8 result; // rax
  unsigned __int64 v12; // r15
  struct _CLIPLINE *v13; // rax
  int v14; // edx
  __int64 v15; // rax

  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = (__int64)ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v10 )
  {
    if ( (unsigned int)(v4 - 33) > 0x270FFDF )
    {
      --*(_DWORD *)(v10 + 432);
      return 0LL;
    }
    v12 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v10, a1);
    if ( !v12 )
      goto LABEL_18;
    v13 = (struct _CLIPLINE *)PALLOCMEM2((unsigned int)v4, 1886221639LL, 0);
    v7 = v13;
    if ( !v13 )
      goto LABEL_18;
    v14 = 0;
    memset(v13, 0, v4);
    if ( (*(_DWORD *)(v10 + 412) & 0x100) != 0 )
    {
      v15 = *(_QWORD *)(v12 + 80);
      if ( !v15 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco == NULL\n",
            4076);
        v6 = 1;
LABEL_18:
        ProbeForWrite(a3, v4, 4u);
        if ( v7 )
          memmove((void *)a3, v7, v4);
        else
          memset((void *)a3, 0, v4);
        if ( v7 )
          Win32FreePool(v7);
        --*(_DWORD *)(v10 + 432);
        return v6;
      }
      if ( !*(_QWORD *)(v15 + 144) )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco->pcle == NULL\n",
            4082);
        v14 = 1;
        v6 = 1;
      }
    }
    if ( !v14 )
      v6 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)(v12 + 80), (struct _PATHOBJ *)v12, v4, v7, 0);
    goto LABEL_18;
  }
  return result;
}
