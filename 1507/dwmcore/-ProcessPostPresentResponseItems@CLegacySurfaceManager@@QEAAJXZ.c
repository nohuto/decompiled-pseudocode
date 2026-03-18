/*
 * XREFs of ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x1800DF094
 * Callers:
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1800E9118 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessPostPresentResponseItems(CLegacySurfaceManager *this)
{
  int v1; // edi
  __int64 i; // rbp
  __int64 v4; // r14
  int v5; // eax
  int v6; // ebx

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 60); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 27) + 8 * i);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2BEu);
    if ( !v1 || v1 >= 0 && v6 < 0 )
      v1 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  *((_DWORD *)this + 60) = 0;
  return (unsigned int)v1;
}
