/*
 * XREFs of NtGdiFONTOBJ_vGetInfo @ 0x1C02AE2F0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     FONTOBJ_vGetInfo @ 0x1C02861F0 (FONTOBJ_vGetInfo.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C028638C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02AA0AC (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_vGetInfo(__int64 a1, unsigned int a2, char *a3)
{
  unsigned __int64 v4; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v8; // rbx
  unsigned __int64 v10; // rax
  FONTOBJ *v11; // r15
  FONTINFO *v12; // rax
  FONTINFO *v13; // r14

  v4 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 3221225485LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v10 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  v11 = (FONTOBJ *)v10;
  if ( v10 )
  {
    if ( (_DWORD)v4 )
    {
      if ( a3 )
      {
        if ( (unsigned int)v4 <= 0x2710000 )
        {
          v12 = (FONTINFO *)PALLOCMEM2((unsigned int)v4, 1886221639LL, 0);
          v13 = v12;
          if ( v12 )
          {
            memset(v12, 0, v4);
            FONTOBJ_vGetInfo(v11, v4, v12);
            bSafeCopyBits(a3, v13, v4);
            Win32FreePool(v13);
          }
        }
      }
    }
  }
  if ( v8 )
    --*((_DWORD *)v8 + 108);
  return 0LL;
}
