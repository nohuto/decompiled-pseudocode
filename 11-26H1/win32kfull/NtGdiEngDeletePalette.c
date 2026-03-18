/*
 * XREFs of NtGdiEngDeletePalette @ 0x14032CF20
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14017EDC0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall NtGdiEngDeletePalette(HPALETTE a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  UMPDOBJ *v5[13]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v6; // [rsp+98h] [rbp+10h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v5, CurrentThread);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  if ( v6 && (*(_DWORD *)(v6 + 24) & 0x2000000) != 0 )
    v3 = EngDeletePaletteInternal((struct EPALOBJ *)&v6);
  else
    v3 = 0;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v5);
  return v3;
}
