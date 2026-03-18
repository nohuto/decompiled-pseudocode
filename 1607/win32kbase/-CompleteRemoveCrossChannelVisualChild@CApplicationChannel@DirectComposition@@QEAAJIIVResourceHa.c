/*
 * XREFs of ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1C003EDE0
 * Callers:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0080D38 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F590 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0042AC8 (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteRemoveCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        int a3,
        int a4)
{
  unsigned __int64 v5; // rcx
  struct DirectComposition::CResourceMarshaler *v7; // rsi
  __int64 CrossChannelVisualChildNoRef; // rbx
  __int64 v9; // rax
  int v10; // ebx
  unsigned __int64 v12; // rdx
  char v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+58h] [rbp+20h]

  v14 = a4;
  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < *((_QWORD *)a1 + 11) )
  {
    _mm_lfence();
    v7 = *(struct DirectComposition::CResourceMarshaler **)(v5 * *((_QWORD *)a1 + 12) + *((_QWORD *)a1 + 8));
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    return (unsigned int)-1073741790;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 112LL))(
          v7,
          32LL) )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v12 = (unsigned int)(a3 - 1);
    if ( v12 >= *((_QWORD *)a1 + 11) )
    {
      CrossChannelVisualChildNoRef = 0LL;
    }
    else
    {
      _mm_lfence();
      CrossChannelVisualChildNoRef = *(_QWORD *)(v12 * *((_QWORD *)a1 + 12) + *((_QWORD *)a1 + 8));
    }
    if ( CrossChannelVisualChildNoRef )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)CrossChannelVisualChildNoRef + 112LL))(
             CrossChannelVisualChildNoRef,
             32LL) )
      {
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741790;
  }
  if ( !v14 )
    return (unsigned int)-1073741811;
  CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v7);
  if ( !CrossChannelVisualChildNoRef )
    return (unsigned int)-1073741811;
LABEL_9:
  v9 = *(_QWORD *)v7;
  v13 = 0;
  v10 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, char *))(v9 + 240))(
          v7,
          a1,
          CrossChannelVisualChildNoRef,
          &v13);
  if ( v10 >= 0 && v13 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v7);
  return (unsigned int)v10;
}
