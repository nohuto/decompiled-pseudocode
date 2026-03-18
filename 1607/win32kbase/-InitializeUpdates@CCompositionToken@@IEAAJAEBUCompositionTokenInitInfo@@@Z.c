/*
 * XREFs of ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C001FEF0
 * Callers:
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C002008C (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C001B1C4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C001B75C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C001EAC8 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C001EEB4 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::InitializeUpdates(
        CCompositionToken *this,
        const struct CompositionTokenInitInfo *a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // r8
  void *v12; // rcx
  __int64 v13; // r14
  CPushLock *v14; // r12
  struct CCompositionBuffer *ActiveBuffer; // rax
  struct CCompositionBuffer *v16; // r14
  int v17; // eax
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v22; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  while ( (unsigned int)v4 < *((_DWORD *)a2 + 2) )
  {
    v7 = *(_QWORD *)a2;
    v8 = *((unsigned int *)this + 20);
    v9 = 0;
    v22 = *(_QWORD *)a2;
    v10 = *(_QWORD *)(*(_QWORD *)a2 + 24 * v4);
    if ( (_DWORD)v8 )
    {
      v11 = *((_QWORD *)this + 9);
      while ( v10 != *(_QWORD *)(32LL * v9 + v11) )
      {
        if ( ++v9 >= (unsigned int)v8 )
          goto LABEL_9;
      }
      v3 = v11 + 32LL * v9;
    }
LABEL_9:
    if ( v9 == (_DWORD)v8 )
    {
      if ( (unsigned int)v8 >= *((_DWORD *)a2 + 3) )
      {
        v2 = -1073741811;
      }
      else
      {
        v12 = *(void **)(v7 + 24 * v4);
        v3 = *((_QWORD *)this + 9) + 32 * v8;
        *(_QWORD *)v3 = v10;
        v2 = CompositionSurfaceObject::ResolveHandle(v12, 2u, 13, (struct CompositionSurfaceObject **)(v3 + 8));
        if ( v2 < 0 )
          goto LABEL_21;
        ++*((_DWORD *)this + 20);
        v13 = *(_QWORD *)(v3 + 8);
        v14 = (CPushLock *)(v13 + 32);
        v2 = CPushLock::AcquireLockExclusive((CPushLock *)(v13 + 32));
        if ( v2 >= 0 )
        {
          v2 = 0;
          ActiveBuffer = CCompositionSurface::GetActiveBuffer((CCompositionSurface *)(v13 + 24));
          v16 = ActiveBuffer;
          if ( ActiveBuffer
            && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
          {
            *(_QWORD *)(v3 + 16) = *((_QWORD *)v16 + 2);
          }
          else
          {
            *(_QWORD *)(v3 + 16) = 0LL;
            v2 = -1073741275;
          }
          CPushLock::ReleaseLock(v14);
        }
        if ( v2 < 0 )
          goto LABEL_21;
        v17 = CRegion::Create((struct CRegion **)(v3 + 24));
        v7 = v22;
        v2 = v17;
      }
    }
    if ( v2 >= 0 )
      v2 = CRegion::AddRect(*(CRegion **)(v3 + 24), (struct _RECTL *)(v7 + 8 + 24 * v4));
LABEL_21:
    v4 = (unsigned int)(v4 + 1);
    if ( v2 < 0 )
      break;
  }
  if ( v2 >= 0 )
  {
    v18 = *((_DWORD *)this + 20);
    if ( v18 != *((_DWORD *)a2 + 3) )
      v2 = -1073741811;
    if ( v2 >= 0 )
    {
      v19 = 0;
      if ( v18 )
      {
        do
        {
          v20 = v19++;
          *(_QWORD *)(32 * v20 + *((_QWORD *)this + 9)) = 0LL;
        }
        while ( v19 < *((_DWORD *)this + 20) );
      }
    }
  }
  return (unsigned int)v2;
}
