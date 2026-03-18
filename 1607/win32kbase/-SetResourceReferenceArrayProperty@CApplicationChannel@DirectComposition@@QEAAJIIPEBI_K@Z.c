/*
 * XREFs of ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C00401D8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F590 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r10
  struct DirectComposition::CResourceMarshaler *v10; // r14
  unsigned __int64 v11; // rbp
  int v12; // ebx
  __int64 v13; // r9
  unsigned int v14; // ecx
  unsigned __int64 v15; // r8
  __int64 v16; // r8
  char v18; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0LL;
  v18 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( a2 && v6 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v10 = *(struct DirectComposition::CResourceMarshaler **)(v6 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v10 = 0LL;
  }
  v11 = a5;
  v12 = 0;
  if ( !v10 )
    v12 = -1073741790;
  if ( a5 )
  {
    if ( v12 >= 0 )
    {
      if ( !is_mul_ok(a5, 8uLL) )
        return (unsigned int)-1073741675;
      v12 = 0;
      v5 = Win32AllocPoolWithQuota();
      if ( !v5 )
        v12 = -1073741801;
    }
    v13 = 0LL;
    if ( v12 < 0 )
      goto LABEL_27;
    do
    {
      if ( (unsigned int)v13 >= v11 )
        break;
      v14 = a4[v13];
      v15 = v14 - 1;
      if ( v14 && v15 < *((_QWORD *)this + 11) )
        v16 = *(_QWORD *)(v15 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
      else
        v16 = 0LL;
      *(_QWORD *)(v5 + 8 * v13) = v16;
      if ( !v16 )
        v12 = -1073741811;
      v13 = (unsigned int)(v13 + 1);
    }
    while ( v12 >= 0 );
  }
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)v10 + 168LL))(
            v10,
            this,
            a3,
            v5,
            v11,
            &v18);
    if ( v12 >= 0 )
    {
      if ( v18 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
      return (unsigned int)v12;
    }
  }
LABEL_27:
  if ( v5 )
    Win32FreePool();
  return (unsigned int)v12;
}
