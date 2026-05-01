/*
 * XREFs of ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x180014AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1800038C0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ResourceSetClientProxy::ResetExternalResourcePriorities(ResourceSetClientProxy *this)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  int *v4; // r10
  _DWORD *v5; // r9
  int v6; // eax
  _BYTE v7[1928]; // [rsp+20h] [rbp-CB8h] BYREF
  char v8; // [rsp+7A8h] [rbp-530h] BYREF
  _BYTE v9[1088]; // [rsp+880h] [rbp-458h] BYREF

  `vector constructor iterator'(
    (ExecutionModel::_ResourceSetInfo *)v9,
    24LL,
    45,
    (void (__fastcall *)(ExecutionModel::_ResourceSetInfo *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 6) + 120LL))(
             *((_QWORD *)this + 6),
             *((unsigned int *)this + 7),
             v7);
  if ( (int)result >= 0 )
  {
    v3 = 3;
    v4 = (int *)&v8;
    v5 = v9;
    do
    {
      v6 = *v4++;
      *v5 = v3++;
      v5[4] = v6;
      v5 += 6;
    }
    while ( v3 < 0x30 );
    return (*(__int64 (__fastcall **)(ResourceSetClientProxy *, __int64, _BYTE *, _DWORD *))(*(_QWORD *)this + 112LL))(
             this,
             45LL,
             v9,
             v5);
  }
  return result;
}
