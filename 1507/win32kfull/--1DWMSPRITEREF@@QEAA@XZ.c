/*
 * XREFs of ??1DWMSPRITEREF@@QEAA@XZ @ 0x1C00103A0
 * Callers:
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0260AEC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITEREF::~DWMSPRITEREF(DWMSPRITEREF *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
  *((_QWORD *)this + 4) = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(this);
}
