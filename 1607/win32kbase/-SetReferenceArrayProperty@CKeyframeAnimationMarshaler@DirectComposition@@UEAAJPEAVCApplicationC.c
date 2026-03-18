/*
 * XREFs of ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00E6CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceArrayProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v9; // esi
  unsigned int v10; // ebp

  v6 = 0;
  v9 = 0;
  *a6 = 0;
  if ( a3 != 13 || !a4 )
    v9 = -1073741811;
  v10 = 0;
  if ( v9 >= 0 )
  {
    do
    {
      if ( v10 >= a5 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 112LL))(
              a4[v10],
              104LL) )
        v9 = -1073741811;
      ++v10;
    }
    while ( v9 >= 0 );
    if ( v9 >= 0 )
    {
      if ( *((_QWORD *)this + 21) || *((_DWORD *)this + 44) )
        v9 = -1073741811;
      if ( v9 >= 0 )
      {
        *((_DWORD *)this + 44) = a5;
        *((_QWORD *)this + 21) = a4;
        *a6 = 1;
        *((_DWORD *)this + 4) &= ~0x400u;
        if ( *((_DWORD *)this + 44) )
        {
          do
            DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 21) + 8LL * v6++));
          while ( v6 < *((_DWORD *)this + 44) );
        }
      }
    }
  }
  return (unsigned int)v9;
}
