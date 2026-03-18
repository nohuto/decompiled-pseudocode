/*
 * XREFs of NtGdiPATHOBJ_bEnumClipLines @ 0x1C02B0D10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AAD24 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C02B7908 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnumClipLines(__int64 a1, __int64 a2, volatile void *a3, __int64 a4)
{
  SIZE_T v5; // r15
  unsigned int v7; // r14d
  struct _CLIPLINE *v8; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  unsigned __int64 v11; // r13
  struct _CLIPLINE *v12; // rax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  UMPDOBJ *v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = (unsigned int)a2;
  v7 = 0;
  v8 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v17, ThreadCurrentObj);
  if ( !v17 || (unsigned int)(v5 - 33) > 0x270FFDF )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v17);
    return 0LL;
  }
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v11 )
  {
    v12 = (struct _CLIPLINE *)PALLOCMEM2((unsigned int)v5, 1886221639LL, 0);
    v8 = v12;
    if ( v12 )
    {
      v13 = 0;
      memset(v12, 0, (unsigned int)v5);
      if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) != 0 )
      {
        v14 = *(_QWORD *)(v11 + 80);
        if ( !v14 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco == NULL\n",
              4117);
          v7 = 1;
          goto LABEL_16;
        }
        if ( !*(_QWORD *)(v14 + 144) )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco->pcle == NULL\n",
              4123);
          v7 = 1;
          v13 = 1;
        }
      }
      if ( !v13 )
        v7 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)(v11 + 80), (struct _PATHOBJ *)v11, v5, v8, 0);
    }
  }
LABEL_16:
  ProbeForWrite(a3, v5, 4u);
  if ( v8 )
    memmove((void *)a3, v8, v5);
  else
    memset((void *)a3, 0, v5);
  if ( v8 )
    Win32FreePool(v8, v15);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v17);
  return v7;
}
