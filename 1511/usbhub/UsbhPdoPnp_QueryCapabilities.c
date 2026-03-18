/*
 * XREFs of UsbhPdoPnp_QueryCapabilities @ 0x1C000C860
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     memset @ 0x1C0029180 (memset.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryCapabilities(__int64 a1, IRP *a2)
{
  __int64 v3; // rbp
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  __int16 SecurityQos; // si
  __int16 v6; // di
  _IO_SECURITY_CONTEXT *v7; // rdx
  bool v8; // zf
  int SecurityQos_high; // eax
  int v10; // ecx
  __int64 v11; // r8
  BOOL v12; // eax
  BOOL v14; // eax
  __int64 v15; // rcx

  v3 = PdoExt(a1);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = (__int16)SecurityContext->SecurityQos;
  v6 = WORD1(SecurityContext->SecurityQos);
  memset(SecurityContext, 0, 0x40uLL);
  LOWORD(SecurityContext->SecurityQos) = SecurityQos;
  WORD1(SecurityContext->SecurityQos) = v6;
  if ( (*(_DWORD *)(v3 + 1172) & 0x10) != 0 )
    HIDWORD(SecurityContext->SecurityQos) &= ~0x10u;
  else
    HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
  HIDWORD(SecurityContext->SecurityQos) = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFDBF | (((*(_DWORD *)(v3 + 1412) >> 9) & 1) << 6);
  LODWORD(SecurityContext->AccessState) = *(unsigned __int16 *)(v3 + 1420);
  HIDWORD(SecurityContext->AccessState) = -1;
  if ( !*(_DWORD *)(v3 + 1184) )
  {
    v15 = *(_QWORD *)(v3 + 1176);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v3 + 1412) & 0x40000) == 0 )
        *(_DWORD *)(v3 + 1184) = *(_DWORD *)(FdoExt(v15) + 5036);
    }
  }
  v7 = SecurityContext + 1;
  SecurityContext[1].FullCreateOptions = *(_DWORD *)(v3 + 1184);
  SecurityContext->FullCreateOptions = 1;
  v8 = (*(_DWORD *)(v3 + 1412) & 0x100) == 0;
  SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
  v10 = 2;
  SecurityContext[2].AccessState = 0LL;
  v11 = 5LL;
  if ( v8 )
  {
    SecurityContext[2].SecurityQos = (_SECURITY_QUALITY_OF_SERVICE *)1;
    HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high & 0xFFFFC3FC | 0x400;
    do
    {
      v7 = (_IO_SECURITY_CONTEXT *)((char *)v7 + 4);
      v14 = v10++ > (signed int)SecurityContext[1].FullCreateOptions;
      v7[-1].FullCreateOptions = v14 + 3;
      --v11;
    }
    while ( v11 );
  }
  else
  {
    SecurityContext[2].SecurityQos = (_SECURITY_QUALITY_OF_SERVICE *)3;
    HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high & 0xFFFFC3FC | 0x1C03;
    do
    {
      v7 = (_IO_SECURITY_CONTEXT *)((char *)v7 + 4);
      v12 = v10++ > (signed int)SecurityContext[1].FullCreateOptions;
      v7[-1].FullCreateOptions = v12 + 3;
      --v11;
    }
    while ( v11 );
  }
  if ( (*(_DWORD *)(v3 + 1132) & 4) != 0 )
    HIDWORD(SecurityContext->SecurityQos) |= 0x100u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
