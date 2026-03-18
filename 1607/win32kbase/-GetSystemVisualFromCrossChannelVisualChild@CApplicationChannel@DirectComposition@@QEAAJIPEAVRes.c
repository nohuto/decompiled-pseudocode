/*
 * XREFs of ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C003F304
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C007E2F8 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0080D38 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0018958 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetSystemVisualFromCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        struct ResourceHandle *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // rcx
  _QWORD *v7; // rdi
  int *v8; // rdi

  v3 = 0;
  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v7 = *(_QWORD **)(v5 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v7 + 112LL))(v7, 32LL)
      && (v8 = (int *)v7[20]) != 0LL
      && (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v8 + 208LL))(v8) )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), v8[60]);
      *(_DWORD *)a3 = v8[60];
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
