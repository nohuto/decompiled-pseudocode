/*
 * XREFs of ?LockBytes@CD3DBuffer@@QEAAJI@Z @ 0x1800ACFB8
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DBuffer::LockBytes(CD3DBuffer *this, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // eax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 13) == 2 )
  {
    v4 = 5 - (*((_DWORD *)this + 11) - *((_DWORD *)this + 10) < a2);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(*((_QWORD *)this + 3) + 576LL)
                                                                                     + 112LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 576LL),
           *((_QWORD *)this + 2),
           0LL,
           v4,
           0,
           v7);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2Fu);
      return v2;
    }
    *((_QWORD *)this + 4) = v7[0];
    if ( v4 == 4 )
      *((_DWORD *)this + 10) = 0;
  }
  *((_BYTE *)this + 56) = 1;
  return v2;
}
