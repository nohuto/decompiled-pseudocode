/*
 * XREFs of UsbhPdoPnp_QueryCapabilities @ 0x1C0025350
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryCapabilities(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbp
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  __int16 SecurityQos; // si
  __int16 v8; // di
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _IO_SECURITY_CONTEXT *v12; // rdx
  bool v13; // zf
  int SecurityQos_high; // eax
  int v15; // ecx
  __int64 v16; // r8
  BOOL v17; // eax
  BOOL v19; // eax
  __int64 v20; // rcx

  v5 = PdoExt(a1, (__int64)a2, a3, a4);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = (__int16)SecurityContext->SecurityQos;
  v8 = WORD1(SecurityContext->SecurityQos);
  memset(SecurityContext, 0, 0x40uLL);
  LOWORD(SecurityContext->SecurityQos) = SecurityQos;
  WORD1(SecurityContext->SecurityQos) = v8;
  if ( (v5[293] & 0x10) != 0 )
    HIDWORD(SecurityContext->SecurityQos) &= ~0x10u;
  else
    HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
  HIDWORD(SecurityContext->SecurityQos) = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFDBF | (((v5[353] >> 9) & 1) << 6);
  LODWORD(SecurityContext->AccessState) = *((unsigned __int16 *)v5 + 710);
  HIDWORD(SecurityContext->AccessState) = -1;
  if ( !v5[296] )
  {
    v20 = *((_QWORD *)v5 + 147);
    if ( v20 )
    {
      if ( (v5[353] & 0x40000) == 0 )
        v5[296] = FdoExt(v20, v9, v10, v11)[1259];
    }
  }
  v12 = SecurityContext + 1;
  SecurityContext[1].FullCreateOptions = v5[296];
  SecurityContext->FullCreateOptions = 1;
  v13 = (v5[353] & 0x100) == 0;
  SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
  v15 = 2;
  SecurityContext[2].AccessState = 0LL;
  v16 = 5LL;
  if ( v13 )
  {
    SecurityContext[2].SecurityQos = (_SECURITY_QUALITY_OF_SERVICE *)1;
    HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high & 0xFFFFC3FC | 0x400;
    do
    {
      v12 = (_IO_SECURITY_CONTEXT *)((char *)v12 + 4);
      v19 = v15++ > (signed int)SecurityContext[1].FullCreateOptions;
      v12[-1].FullCreateOptions = v19 + 3;
      --v16;
    }
    while ( v16 );
  }
  else
  {
    SecurityContext[2].SecurityQos = (_SECURITY_QUALITY_OF_SERVICE *)3;
    HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high & 0xFFFFC3FC | 0x1C03;
    do
    {
      v12 = (_IO_SECURITY_CONTEXT *)((char *)v12 + 4);
      v17 = v15++ > (signed int)SecurityContext[1].FullCreateOptions;
      v12[-1].FullCreateOptions = v17 + 3;
      --v16;
    }
    while ( v16 );
  }
  if ( (v5[283] & 4) != 0 )
    HIDWORD(SecurityContext->SecurityQos) |= 0x100u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
