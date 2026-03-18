/*
 * XREFs of ?GetContentType@CVisual@@UEAAKXZ @ 0x1801202A0
 * Callers:
 *     ?GetContentType@CWindowNode@@UEAAKXZ @ 0x180123750 (-GetContentType@CWindowNode@@UEAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CVisual::GetContentType(CVisual *this)
{
  __int64 v1; // rdi
  unsigned int v2; // esi

  v1 = *((_QWORD *)this + 45);
  v2 = 0;
  if ( v1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 48LL))(*((_QWORD *)this + 45), 92LL) )
    {
      return 4;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 45) + 48LL))(
                *((_QWORD *)this + 45),
                87LL) )
    {
      return 2;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 45) + 48LL))(
                *((_QWORD *)this + 45),
                89LL) )
    {
      return 3;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 45) + 48LL))(
                *((_QWORD *)this + 45),
                34LL) )
    {
      return 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 45) + 48LL))(
                *((_QWORD *)this + 45),
                94LL) )
    {
      return 5;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 45) + 48LL))(
                *((_QWORD *)this + 45),
                95LL) )
    {
      return 6;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 45) + 48LL))(
                *((_QWORD *)this + 45),
                104LL) )
    {
      return 7;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 45) + 48LL))(
                *((_QWORD *)this + 45),
                105LL) )
    {
      return 8;
    }
  }
  return v2;
}
