/*
 * XREFs of ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x180013D60
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180002360 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ResourceSetClientProxy::ResetExternalResourcePriorities(ResourceSetClientProxy *this)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  int *v4; // r10
  char *v5; // r9
  int v6; // eax
  _BYTE v7[1920]; // [rsp+20h] [rbp-CA8h] BYREF
  char v8; // [rsp+7A0h] [rbp-528h] BYREF
  char v9[1088]; // [rsp+870h] [rbp-458h] BYREF

  `vector constructor iterator'(
    v9,
    24LL,
    45,
    (__int64 (__fastcall *)(ExecutionModel::_ResourceSetInfo *__hidden))ExecutionModel::_ResourceInfo::_ResourceInfo);
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
      *(_DWORD *)v5 = v3++;
      *((_DWORD *)v5 + 4) = v6;
      v5 += 24;
    }
    while ( v3 < 0x30 );
    return (*(__int64 (__fastcall **)(ResourceSetClientProxy *, __int64, char *, char *))(*(_QWORD *)this + 112LL))(
             this,
             45LL,
             v9,
             v5);
  }
  return result;
}
