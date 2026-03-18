/*
 * XREFs of ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C004CD5C
 * Callers:
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0011360 (-ObjectInit@CompositionTokenObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 * Callees:
 *     ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x1C004C9FC (-ReleaseAllUpdates@CCompositionToken@@IEAAXXZ.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C004CBB8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::Initialize(CCompositionToken *this, const struct CompositionTokenInitInfo *a2)
{
  __int64 v4; // rax
  int v5; // edi

  *((_DWORD *)this + 8) = 0;
  if ( !is_mul_ok(*((unsigned int *)a2 + 3), 0x20uLL) )
  {
    v5 = -1073741675;
LABEL_9:
    CCompositionToken::ReleaseAllUpdates(this);
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
    return (unsigned int)v5;
  }
  v4 = Win32AllocPoolZInit(32LL * *((unsigned int *)a2 + 3));
  v5 = 0;
  *((_QWORD *)this + 9) = v4;
  if ( !v4 )
    v5 = -1073741801;
  *((_DWORD *)this + 20) = 0;
  if ( v5 < 0 )
    goto LABEL_9;
  v5 = CCompositionToken::InitializeUpdates(this, a2);
  if ( v5 < 0 )
    goto LABEL_9;
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 24) = *((_DWORD *)this + 20);
  *((_BYTE *)this + 64) = 1;
  return (unsigned int)v5;
}
