/*
 * XREFs of NtGdiEngCreatePalette @ 0x14021FF70
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1400D9610 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x14032C4CC (-bSecureBits@@YAHPEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

HPALETTE __fastcall NtGdiEngCreatePalette(__int64 a1, ULONG a2, void *a3, FLONG a4, FLONG flGreen, FLONG a6)
{
  FLONG flBlue; // esi
  int v10; // ebp
  struct _GRETHREAD *CurrentThread; // rax
  HPALETTE v12; // rbx
  void *v13; // r14
  ULONG *v14; // r8
  HPALETTE Palette; // rsi
  unsigned int v17; // eax
  int Bits; // eax
  void *v19; // [rsp+38h] [rbp-4C0h] BYREF
  UMPDOBJ *v20[12]; // [rsp+40h] [rbp-4B8h] BYREF
  ULONG pulColors[256]; // [rsp+A0h] [rbp-458h] BYREF

  flBlue = a6;
  v10 = a1;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v20, CurrentThread);
  memset_0(pulColors, 0, sizeof(pulColors));
  v12 = 0LL;
  v19 = 0LL;
  v13 = 0LL;
  if ( a2 > 0x10000 )
    goto LABEL_9;
  if ( (v10 & 0xFFFF7FFF) != 1 || !a2 )
    goto LABEL_3;
  v17 = 4 * a2;
  if ( a2 > 0x100 )
  {
    Bits = bSecureBits(a3, v17, &v19);
    v13 = v19;
  }
  else
  {
    Bits = bSafeReadBits(pulColors, a3, v17);
  }
  Palette = (HPALETTE)Bits;
  if ( Bits )
  {
    flBlue = a6;
LABEL_3:
    v14 = (ULONG *)a3;
    if ( a2 <= 0x100 )
      v14 = pulColors;
    Palette = EngCreatePalette(v10 | 0x8000u, a2, v14, a4, flGreen, flBlue);
  }
  if ( v13 )
    GrepUnsecureVirtualMemory(v13);
  v12 = Palette;
LABEL_9:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v20);
  return v12;
}
