/*
 * XREFs of ?ResetExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180047E20
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x18002048C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::ResetExternalResourcePriorities(
        ExecutionModel::ResourceSetImpl *this)
{
  __int64 v1; // rbp
  int v3; // r8d
  unsigned int v4; // edx
  char *v5; // r8
  char *v6; // rcx
  _BYTE *v7; // rdx
  int v8; // ecx
  char v9; // al
  _BYTE v11[56]; // [rsp+20h] [rbp-4C8h] BYREF
  char v12; // [rsp+58h] [rbp-490h] BYREF
  _BYTE v13[16]; // [rsp+90h] [rbp-458h] BYREF
  char v14; // [rsp+A0h] [rbp-448h] BYREF

  v1 = 45LL;
  `vector constructor iterator'(
    (ExecutionModel::_ResourceInfo *)v13,
    24LL,
    45,
    ExecutionModel::_ResourceInfo::_ResourceInfo);
  if ( !(*(unsigned __int8 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 80LL))(this)
    || (*(unsigned __int8 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 72LL))(this) )
  {
    return (unsigned int)-2147467259;
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 19) + 16LL)
                                                                          + 32LL)
                                                            + 32LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 19) + 16LL) + 32LL),
           *((unsigned int *)this + 36),
           v11);
    if ( v3 >= 0 )
    {
      v4 = 0;
      v5 = &v12;
      v6 = &v14;
      do
      {
        *(_DWORD *)v6 = 101;
        *((_DWORD *)v6 - 4) = v4 + 3;
        if ( (unsigned __int8)(*v5 - 1) <= 0x63u )
          *(_DWORD *)v6 = (unsigned __int8)*v5;
        ++v4;
        ++v5;
        v6 += 24;
      }
      while ( v4 < 0x2D );
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 22) + 112LL))(
             *((_QWORD *)this + 22),
             45LL,
             v13);
      if ( v3 >= 0 )
      {
        v7 = v13;
        do
        {
          v8 = *(_DWORD *)v7;
          v9 = v7[16];
          v7 += 24;
          *((_BYTE *)this + (unsigned int)(v8 - 3) + 88) = v9;
          --v1;
        }
        while ( v1 );
      }
    }
  }
  return (unsigned int)v3;
}
