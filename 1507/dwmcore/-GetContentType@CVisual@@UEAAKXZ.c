/*
 * XREFs of ?GetContentType@CVisual@@UEAAKXZ @ 0x180103AE0
 * Callers:
 *     ?GetContentType@CWindowNode@@UEAAKXZ @ 0x180105040 (-GetContentType@CWindowNode@@UEAAKXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CVisual::GetContentType(CVisual *this)
{
  __int64 v1; // rdi
  unsigned int v2; // esi

  v1 = *((_QWORD *)this + 47);
  v2 = 0;
  if ( v1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 48LL))(*((_QWORD *)this + 47), 84LL) )
    {
      return 4;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 48LL))(
                *((_QWORD *)this + 47),
                79LL) )
    {
      return 2;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 48LL))(
                *((_QWORD *)this + 47),
                81LL) )
    {
      return 3;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 48LL))(
                *((_QWORD *)this + 47),
                33LL) )
    {
      return 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 48LL))(
                *((_QWORD *)this + 47),
                86LL) )
    {
      return 5;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 48LL))(
                *((_QWORD *)this + 47),
                87LL) )
    {
      return 6;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 48LL))(
                *((_QWORD *)this + 47),
                96LL) )
    {
      return 7;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 48LL))(
                *((_QWORD *)this + 47),
                97LL) )
    {
      return 8;
    }
  }
  return v2;
}
