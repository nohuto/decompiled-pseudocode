/*
 * XREFs of ?SetReferenceArrayProperty@CTransformGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00161B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CTransformGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // edi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8

  v6 = 0;
  *a6 = 0;
  if ( a3 || !a4 )
    v6 = -1073741811;
  v10 = 0LL;
  if ( v6 >= 0 )
  {
    do
    {
      if ( (unsigned int)v10 >= a5 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 112LL))(
              a4[v10],
              57LL) )
        v6 = -1073741811;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( v6 >= 0 );
    if ( v6 >= 0 )
    {
      if ( *((_QWORD *)this + 7) )
        (*(void (__fastcall **)(DirectComposition::CTransformGroupMarshaler *, struct DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 104LL))(
          this,
          a2);
      *((_DWORD *)this + 16) = a5;
      v11 = 0LL;
      *((_QWORD *)this + 7) = a4;
      for ( *a6 = 1; (unsigned int)v11 < *((_DWORD *)this + 16); ++*(_DWORD *)(v12 + 20) )
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v11);
        v11 = (unsigned int)(v11 + 1);
      }
      *((_DWORD *)this + 17) = 0;
    }
  }
  return (unsigned int)v6;
}
