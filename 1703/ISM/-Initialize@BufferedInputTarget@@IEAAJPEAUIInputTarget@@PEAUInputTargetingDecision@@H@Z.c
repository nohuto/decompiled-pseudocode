/*
 * XREFs of ?Initialize@BufferedInputTarget@@IEAAJPEAUIInputTarget@@PEAUInputTargetingDecision@@H@Z @ 0x180080544
 * Callers:
 *     ?Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z @ 0x180080718 (-Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BufferedInputTarget::Initialize(
        BufferedInputTarget *this,
        struct IInputTarget *a2,
        struct InputTargetingDecision *a3,
        int a4)
{
  unsigned int v4; // ebx
  BufferedInputTarget *v7; // r14
  int v8; // r12d
  char v9; // al
  int v10; // r9d
  int v11; // eax
  char *v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rcx
  signed int v16; // esi
  _DWORD *v17; // rdi
  int v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+88h] [rbp+20h]

  v4 = 0;
  v19 = a4 + 1;
  v7 = this;
  v8 = 0;
  if ( a4 + 1 > 6 )
  {
    v9 = 1;
    v4 = -2147467263;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 41;
      goto LABEL_4;
    }
    return v4;
  }
  v20 = 0;
  v11 = 0;
  if ( a4 <= 0 )
  {
LABEL_16:
    *((_DWORD *)v7 + 6 * v8 + 8) = 3;
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    v15 = *((_QWORD *)v7 + 3 * v8 + 5);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    *((_QWORD *)v7 + 3 * v8 + 5) = a2;
    v16 = v8 + 1;
    *((_DWORD *)v7 + 6 * v8 + 12) = 0;
    if ( (unsigned int)(v8 + 1) < 6 )
    {
      v17 = (_DWORD *)((char *)v7 + 16 * v16 + 8 * v16 + 40);
      do
      {
        *(v17 - 2) = 0;
        if ( *(_QWORD *)v17 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v17 + 16LL))(*(_QWORD *)v17);
        *(_QWORD *)v17 = 0LL;
        ++v16;
        v17[2] = 0;
        v17 += 6;
      }
      while ( (unsigned int)v16 < 6 );
    }
    *((_DWORD *)v7 + 44) = v19;
    return v4;
  }
  v12 = (char *)this + 40;
  v13 = a3 - this;
  while ( *(_DWORD *)&v12[v13 - 40] == 1 )
  {
    *((_DWORD *)v12 - 2) = 3;
LABEL_11:
    v14 = *(_QWORD *)&v12[v13 - 32];
    if ( v14 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*(_QWORD *)&v12[v13 - 32]);
      v11 = v20;
    }
    this = *(BufferedInputTarget **)v12;
    if ( *(_QWORD *)v12 )
    {
      (*(void (__fastcall **)(BufferedInputTarget *))(*(_QWORD *)this + 16LL))(this);
      v11 = v20;
    }
    *(_QWORD *)v12 = v14;
    ++v11;
    *((_DWORD *)v12 + 2) = 0;
    ++v8;
    v12 += 24;
    v20 = v11;
    if ( v11 >= a4 )
      goto LABEL_16;
  }
  if ( *(_DWORD *)&v12[v13 - 40] == 2 )
  {
    *((_DWORD *)v12 - 2) = 1;
    goto LABEL_11;
  }
  v9 = 87;
  v4 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v10 = 56;
LABEL_4:
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v10, v9);
  }
  return v4;
}
