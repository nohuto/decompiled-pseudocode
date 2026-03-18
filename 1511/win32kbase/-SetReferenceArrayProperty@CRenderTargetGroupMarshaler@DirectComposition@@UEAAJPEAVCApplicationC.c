/*
 * XREFs of ?SetReferenceArrayProperty@CRenderTargetGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0079C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CRenderTargetGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CRenderTargetGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // ebx
  __int64 v10; // rsi
  struct DirectComposition::CResourceMarshaler *v11; // rax
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // r8

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
      if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 112LL))(
             a4[v10],
             39LL) )
      {
        v11 = a4[v10];
        v12 = *((_BYTE *)v11 + 56);
        *((_BYTE *)v11 + 56) = 1;
        if ( v12 )
          v6 = -1073741811;
      }
      else
      {
        v6 = -1073741811;
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( v6 >= 0 );
    if ( v6 >= 0 )
    {
      if ( *((_QWORD *)this + 5) )
        (*(void (__fastcall **)(DirectComposition::CRenderTargetGroupMarshaler *, struct DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 104LL))(
          this,
          a2);
      *((_DWORD *)this + 12) = a5;
      v13 = 0LL;
      *((_QWORD *)this + 5) = a4;
      for ( *a6 = 1; (unsigned int)v13 < *((_DWORD *)this + 12); ++*(_DWORD *)(v14 + 20) )
      {
        v14 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v13);
        v13 = (unsigned int)(v13 + 1);
      }
      *((_DWORD *)this + 13) = 0;
    }
  }
  return (unsigned int)v6;
}
