/*
 * XREFs of ?Size@PropertyMap@Input@@UEBAKXZ @ 0x180027FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyMap::Size(Input::PropertyMap *this)
{
  _QWORD *v1; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  __int64 *v5; // rax
  __int64 i; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 4);
  v3 = 18;
  v4 = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 != v1 )
  {
    do
    {
      v3 += (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v4[6] + 96LL))(v4[6]);
      if ( !*((_BYTE *)v4 + 25) )
      {
        v5 = (__int64 *)v4[2];
        if ( *((_BYTE *)v5 + 25) )
        {
          for ( i = v4[1]; !*(_BYTE *)(i + 25) && v4 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            v4 = (_QWORD *)i;
          v4 = (_QWORD *)i;
        }
        else
        {
          do
          {
            v4 = v5;
            v5 = (__int64 *)*v5;
          }
          while ( !*((_BYTE *)v5 + 25) );
        }
      }
    }
    while ( v4 != *((_QWORD **)this + 4) );
  }
  return v3;
}
