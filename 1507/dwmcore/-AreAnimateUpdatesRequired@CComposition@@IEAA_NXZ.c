/*
 * XREFs of ?AreAnimateUpdatesRequired@CComposition@@IEAA_NXZ @ 0x180005B24
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x180005C34 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CComposition::AreAnimateUpdatesRequired(CComposition *this)
{
  unsigned int v1; // r15d
  char v2; // al
  unsigned int v4; // r14d
  char v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 152);
  v2 = 0;
  v6 = 0;
  v4 = 0;
  do
  {
    if ( v4 >= v1 )
      break;
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 73) + 8LL * v4) + 8LL))(
      *(_QWORD *)(*((_QWORD *)this + 73) + 8LL * v4),
      &v6);
    v2 = v6;
    ++v4;
  }
  while ( !v6 );
  return (*(_DWORD *)(*((_QWORD *)this + 21) + 96LL) > 0) | v2;
}
