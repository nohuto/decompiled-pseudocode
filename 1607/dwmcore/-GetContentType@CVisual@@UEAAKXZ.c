/*
 * XREFs of ?GetContentType@CVisual@@UEAAKXZ @ 0x1801382C0
 * Callers:
 *     ?GetContentType@CWindowNode@@UEAAKXZ @ 0x1801400B0 (-GetContentType@CWindowNode@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetContentType(CVisual *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 38);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 97LL) )
    {
      return 4;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 38) + 48LL))(
                *((_QWORD *)this + 38),
                92LL) )
    {
      return 2;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 38) + 48LL))(
                *((_QWORD *)this + 38),
                94LL) )
    {
      return 3;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 38) + 48LL))(
                *((_QWORD *)this + 38),
                35LL) )
    {
      return 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 38) + 48LL))(
                *((_QWORD *)this + 38),
                100LL) )
    {
      return 5;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 38) + 48LL))(
                *((_QWORD *)this + 38),
                101LL) )
    {
      return 6;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 38) + 48LL))(
                *((_QWORD *)this + 38),
                113LL) )
    {
      return 7;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 38) + 48LL))(
                *((_QWORD *)this + 38),
                114LL) )
    {
      return 8;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 38) + 48LL))(
                *((_QWORD *)this + 38),
                115LL) )
    {
      return 9;
    }
  }
  return v2;
}
