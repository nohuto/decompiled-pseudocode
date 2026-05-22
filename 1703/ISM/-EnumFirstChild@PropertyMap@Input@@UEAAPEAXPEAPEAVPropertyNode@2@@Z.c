/*
 * XREFs of ?EnumFirstChild@PropertyMap@Input@@UEAAPEAXPEAPEAVPropertyNode@2@@Z @ 0x180028290
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall Input::PropertyMap::EnumFirstChild(Input::PropertyMap *this, struct Input::PropertyNode **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // r10
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 **v9; // rax
  __int64 *i; // rcx

  v4 = (__int64 *)operator new(8uLL);
  v5 = v4;
  *v4 = 0LL;
  v6 = (__int64 *)*((_QWORD *)this + 4);
  v7 = *v6;
  *v4 = *v6;
  if ( v7 == *((_QWORD *)this + 4) )
    return 0LL;
  *a2 = *(struct Input::PropertyNode **)(v7 + 48);
  v8 = *v4;
  if ( !*(_BYTE *)(*v4 + 25) )
  {
    v9 = *(__int64 ***)(v8 + 16);
    if ( *((_BYTE *)v9 + 25) )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v8 + 8);
        if ( *(_BYTE *)(v8 + 25) || *v5 != *(_QWORD *)(v8 + 16) )
          break;
        *v5 = v8;
      }
      *v5 = v8;
    }
    else
    {
      for ( i = *v9; !*((_BYTE *)i + 25); i = (__int64 *)*i )
        v9 = (__int64 **)i;
      *v5 = (__int64)v9;
    }
  }
  return v5;
}
