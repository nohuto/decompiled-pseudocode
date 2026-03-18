/*
 * XREFs of ??1CHwSurfaceRenderTargetSharedData@@IEAA@XZ @ 0x18008AB50
 * Callers:
 *     ??1CD3DDeviceLevel1@@UEAA@XZ @ 0x18008B1E4 (--1CD3DDeviceLevel1@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CHwBrushPool@@QEAA@XZ @ 0x18008AAB4 (--1CHwBrushPool@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHwSurfaceRenderTargetSharedData::~CHwSurfaceRenderTargetSharedData(
        CHwSurfaceRenderTargetSharedData *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  ULONG v4; // ebx
  CMILRefCountBase *v5; // rcx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 4));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v5 = *(CMILRefCountBase **)(*((_QWORD *)this + 5) + 8 * i);
    if ( v5 )
      CMILRefCountBase::Release(v5);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 5);
  CHwBrushPool::~CHwBrushPool((CHwSolidBrush **)this + 1);
  v4 = *(_DWORD *)this;
  if ( *(_DWORD *)this != -1 )
  {
    EnterCriticalSection(&g_ResourceCacheIndexManager);
    RtlClearBits(&BitMapHeader, v4, 1u);
    LeaveCriticalSection(&g_ResourceCacheIndexManager);
  }
}
