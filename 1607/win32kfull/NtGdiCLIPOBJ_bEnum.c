/*
 * XREFs of NtGdiCLIPOBJ_bEnum @ 0x1C02AC500
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C0284144 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02ABF28 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_bEnum(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  int v5; // edi
  unsigned int v7; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  XCLIPOBJ *v12; // rbp
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // rdx
  UMPDOBJ *v17[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+20h] BYREF

  v5 = -1;
  v7 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(v17, ThreadCurrentObj);
  v10 = 0;
  if ( !v17[0] )
    goto LABEL_15;
  v11 = UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)ThreadCurrentObj, a1);
  v12 = (XCLIPOBJ *)v11;
  if ( !v11 )
  {
LABEL_14:
    v10 = v5;
    goto LABEL_15;
  }
  if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) == 0 || *(_QWORD *)(v11 + 56) )
  {
    if ( v7 <= 0x2710000 )
    {
      v13 = (char *)PALLOCMEM2(v7, 1886221639LL, 0);
      v14 = v13;
      if ( v13 )
      {
        v18 = 0;
        v5 = XCLIPOBJ::bEnum(v12, v7, v13, &v18);
        if ( v5 != -1 && !(unsigned int)bSafeCopyBits(a3, v14, v18) )
          v5 = -1;
        Win32FreePool(v14, v15);
      }
    }
    goto LABEL_14;
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiCLIPOBJ_bEnum:!peco->bValid()\n", 2707);
  v10 = -1;
LABEL_15:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v17);
  return v10;
}
