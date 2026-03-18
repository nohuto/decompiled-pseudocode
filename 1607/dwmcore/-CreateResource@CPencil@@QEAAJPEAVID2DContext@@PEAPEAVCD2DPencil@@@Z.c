/*
 * XREFs of ?CreateResource@CPencil@@QEAAJPEAVID2DContext@@PEAPEAVCD2DPencil@@@Z @ 0x18014D8C4
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DPencil@@@Z @ 0x18014DAB0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@QEAAJPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPencil::CreateResource(CPencil *this, struct ID2DContext *a2, struct CD2DPencil **a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  struct CD2DPencil *v9; // rbx
  int v10; // eax
  struct CD2DPencil *v11; // rcx
  struct CD2DPencil *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a2;
  v13 = 0LL;
  v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct ID2DContext *, char *, struct CD2DPencil **))(v3 + 200))(
         a2,
         (char *)this + 272,
         &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x119u);
  }
  else
  {
    v9 = v13;
    (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v13 + 13) + 8LL))(*((_QWORD **)v13 + 13));
    v6 = *((_QWORD *)v9 + 13);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 64LL))(
            v6,
            *((_QWORD *)this + 30),
            *((unsigned int *)this + 66));
    v8 = v10;
    if ( v10 >= 0 )
    {
      v11 = 0LL;
      *a3 = v13;
      v13 = 0LL;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x11Bu);
  }
  v11 = v13;
LABEL_7:
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v11 = v13;
  }
  if ( v11 )
    (*(void (__fastcall **)(struct CD2DPencil *))(*(_QWORD *)v11 + 16LL))(v11);
  return v8;
}
