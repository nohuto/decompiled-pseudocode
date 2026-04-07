/*
 * XREFs of ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180035CD8
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031F30 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800339F4 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180033D70 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180035EB0 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180035F88 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18007E454 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::BeginDestroySprite(CTopLevelWindow3D *this, bool *a2)
{
  unsigned int v4; // edi
  bool v5; // si
  __int64 result; // rax
  int v7; // eax
  int started; // eax

  v4 = 0;
  v5 = 1;
  if ( CTopLevelWindow3D::ShouldDelayTransition(this, 0) )
  {
    started = CTopLevelWindow3D::StartDelayHideAnimation(this);
    v4 = started;
    if ( started < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x11Bu);
      goto LABEL_3;
    }
    goto LABEL_8;
  }
  if ( CTopLevelWindow3D::ShouldShowTransition(this)
    && (*(_DWORD *)(*((_QWORD *)this + 39) + 100LL) & 0x20000000) == 0
    && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
  {
    if ( !*((_QWORD *)this + 43) || *((_DWORD *)this + 88) != 3 )
    {
      v7 = CTopLevelWindow3D::StartAnimation((__int64)this, 6u);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x126u);
        goto LABEL_3;
      }
    }
LABEL_8:
    v5 = 0;
  }
LABEL_3:
  result = v4;
  *a2 = v5;
  return result;
}
