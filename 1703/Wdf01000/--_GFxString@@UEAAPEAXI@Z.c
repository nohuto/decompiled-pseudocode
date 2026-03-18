/*
 * XREFs of ??_GFxString@@UEAAPEAXI@Z @ 0x1C0030590
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F19C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

FxString *__fastcall FxString::`scalar deleting destructor'(FxString *this, char a2, unsigned int a3)
{
  wchar_t *Buffer; // rcx
  FxString *v6; // rax
  FX_POOL_TRACKER *v7; // rdi
  FX_POOL_TRACKER *v8; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->__vftable = (FxString_vtbl *)FxString::`vftable';
  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
    FxPoolFree(Buffer);
  FxObject::~FxObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      v6 = (FxString *)((char *)this - 48);
    else
      v6 = this;
    if ( !v6 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v6 & 0xFFF) != 0 )
    {
      v7 = *(FX_POOL_TRACKER **)&v6[-1].m_UnicodeString.Length;
      if ( *((_BYTE *)v6[-1].m_UnicodeString.Buffer + 264) )
      {
        if ( FxIsPagedPoolType(v7->PoolType) )
          FxPoolRemovePagedAllocateTracker(v7);
        else
          FxPoolRemoveNonPagedAllocateTracker(v7);
        memset(v7, 0, v7->Size + 64);
      }
      v8 = v7;
    }
    else
    {
      v8 = (FX_POOL_TRACKER *)v6;
    }
    ExFreePoolWithTag(v8, 0);
  }
  return this;
}
