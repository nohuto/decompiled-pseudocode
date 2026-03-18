/*
 * XREFs of ?IsReadyToDraw@CMaskBrush@@UEBA_NXZ @ 0x18013ECC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMaskBrush::IsReadyToDraw(CMaskBrush *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 48LL))(
              *((_QWORD *)this + 17),
              84LL)
        || (v4 = *(_QWORD *)(*((_QWORD *)this + 17) + 128LL),
            (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 78LL))
        || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 80LL) )
      {
        v5 = *((_QWORD *)this + 16);
        if ( !v5
          || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5)
          && (!(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 48LL))(
                 *((_QWORD *)this + 16),
                 84LL)
           || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 16) + 128LL) + 48LL))(
                *(_QWORD *)(*((_QWORD *)this + 16) + 128LL),
                80LL)) )
        {
          return 1;
        }
      }
    }
  }
  return v2;
}
