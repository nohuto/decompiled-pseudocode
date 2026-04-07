/*
 * XREFs of ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x18007DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180015FA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThumbnailVisual::EndTransition(CThumbnailVisual *this)
{
  struct tagPOINT *v2; // rcx
  _DWORD *v3; // rcx
  LONG v4; // edx
  LONG v5; // eax
  __int64 v6; // rax
  CBaseObject *v7; // rcx
  struct tagPOINT v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 457) )
  {
    v2 = (struct tagPOINT *)*((_QWORD *)this + 44);
    if ( v2 )
    {
      v8 = v2[5];
      CVisual::SetOffset((struct tagPOINT *)this, &v8);
      v3 = (_DWORD *)*((_QWORD *)this + 44);
      v4 = v3[13] - v3[11];
      if ( v4 < 0 )
        v4 = 0;
      v5 = v3[12] - v3[10];
      v8.y = v4;
      if ( v5 < 0 )
        v5 = 0;
      v8.x = v5;
      (*(void (__fastcall **)(CThumbnailVisual *, struct tagPOINT *))(*(_QWORD *)this + 80LL))(this, &v8);
      if ( !*((_BYTE *)this + 340) )
      {
        v6 = *((_QWORD *)this + 44);
        if ( (*(_BYTE *)(v6 + 36) & 4) != 0 )
          CVisual::SetOpacity(this, (double)*(unsigned __int8 *)(v6 + 72) / 255.0);
      }
      CThumbnailVisual::SetDirtyFlags(this, 4096);
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 56);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 56) = 0LL;
  }
  CThumbnailVisual::SetDirtyFlags(this, 0x8000);
  *((_BYTE *)this + 457) = 0;
}
