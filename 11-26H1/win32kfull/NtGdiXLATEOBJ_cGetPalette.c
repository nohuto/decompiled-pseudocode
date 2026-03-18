/*
 * XREFs of NtGdiXLATEOBJ_cGetPalette @ 0x140184FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400D9968 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     XLATEOBJ_cGetPalette @ 0x1401850F0 (XLATEOBJ_cGetPalette.c)
 */

__int64 __fastcall NtGdiXLATEOBJ_cGetPalette(__int64 a1, ULONG a2, ULONG a3, void *a4)
{
  ULONG Palette; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v10; // r8
  XLATEOBJ *v11; // r15
  ULONG *v12; // rax
  ULONG *v13; // rdi
  UMPDOBJ *v15[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+40h] [rbp-58h]

  Palette = 0;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v15, CurrentThread);
  if ( v16 )
  {
    v11 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v16, a1);
    if ( v11 )
    {
      if ( a4 )
      {
        if ( a3 <= 0x9C4000 )
        {
          v12 = (ULONG *)PALLOCNOZ(4 * a3, 1886221639LL, v10);
          v13 = v12;
          if ( v12 )
          {
            Palette = XLATEOBJ_cGetPalette(v11, a2, a3, v12);
            if ( Palette )
              Palette &= -((unsigned int)bSafeCopyBits(a4, v13, 4 * a3) != 0);
            Win32FreePool(v13);
          }
        }
      }
    }
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v15);
  return Palette;
}
