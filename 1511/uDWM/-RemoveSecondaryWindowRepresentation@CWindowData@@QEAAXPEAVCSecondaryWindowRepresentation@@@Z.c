/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001D318
 * Callers:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180017BBC (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x180017FD8 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     EtwppTemplate_qq @ 0x18007CC5C (EtwppTemplate_qq.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        __int64 a3,
        __int64 a4)
{
  __int128 v6; // [rsp+20h] [rbp-18h]
  struct CSecondaryWindowRepresentation *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v6 = *((_OWORD *)a2 + 4);
  if ( (CWindowData *)v6 != this )
  {
    if ( dword_1800BB564
      && (unsigned __int8)(byte_1800BB568 - 1) > 2u
      && (qword_1800BB550 & 0x8000000000000001uLL) != 0
      && (qword_1800BB558 & 0x8000000000000001uLL) == qword_1800BB558 )
    {
      EtwppTemplate_qq(this, &EtwTraceInfo_9001, a2, *((_QWORD *)this + 5));
    }
    DynArray<CAnimationComponent *,0>::Remove((__int64 *)this + 52, (__int64 *)&v7);
  }
  LOBYTE(a4) = 1;
  CWindowData::RemoveSecondaryWindowRepresentation(v6, a2, DWORD2(v6), a4);
}
