/*
 * XREFs of GetProcessorGroupInformation @ 0x1C00031B8
 * Callers:
 *     NVMeControllerFilterResouceRequirements @ 0x1C0004698 (NVMeControllerFilterResouceRequirements.c)
 * Callees:
 *     memset @ 0x1C000EF40 (memset.c)
 */

char __fastcall GetProcessorGroupInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v4; // r14
  unsigned __int16 v5; // di
  __int64 v6; // r8
  unsigned __int16 *v8; // r15
  __int64 v9; // r9
  unsigned __int16 v10; // ax
  unsigned int v11; // eax
  char *v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  char result; // al

  v4 = (void **)(a1 + 168);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 168);
  if ( v6 )
  {
    StorPortExtendedFunction(1LL, a1, v6, a4);
    *v4 = 0LL;
  }
  v8 = (unsigned __int16 *)(a1 + 152);
  *(_WORD *)(a1 + 154) = 0;
  *(_WORD *)(a1 + 152) = 0;
  StorPortExtendedFunction(18LL, a1, a1 + 152, a4);
  v10 = *(_WORD *)(a1 + 152);
  if ( v10 && (StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)v10, 1701672526LL), *v4) )
  {
    v11 = (16 * (unsigned int)*v8) >> 2;
    if ( v11 )
      memset(*v4, 0, 4LL * v11);
    if ( *v8 )
    {
      v12 = (char *)*v4;
      do
      {
        v13 = 16LL * v5;
        StorPortExtendedFunction(19LL, a1, v5, &v12[v13 + 8]);
        *(_WORD *)((char *)*v4 + v13) = v5++;
        v14 = *(_DWORD *)((char *)*v4 + v13 + 8) - ((*(_DWORD *)((char *)*v4 + v13 + 8) >> 1) & 0x55555555);
        *(_WORD *)((char *)*v4 + v13 + 2) = (unsigned __int16)((16843009
                                                              * (((v14 & 0x33333333)
                                                                + ((v14 >> 2) & 0x33333333)
                                                                + (((v14 & 0x33333333) + ((v14 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v15 = HIDWORD(*(_QWORD *)((char *)*v4 + v13 + 8))
            - (((unsigned int)HIDWORD(*(_QWORD *)((char *)*v4 + v13 + 8)) >> 1) & 0x55555555);
        *(_WORD *)((char *)*v4 + v13 + 2) += (unsigned __int16)((16843009
                                                               * (((v15 & 0x33333333)
                                                                 + ((v15 >> 2) & 0x33333333)
                                                                 + (((v15 & 0x33333333) + ((v15 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v12 = (char *)*v4;
        *(_WORD *)(a1 + 154) += *(_WORD *)((char *)*v4 + v13 + 2);
      }
      while ( v5 < *v8 );
    }
    return 1;
  }
  else
  {
    if ( *v4 )
    {
      StorPortExtendedFunction(1LL, a1, *v4, v9);
      *v4 = 0LL;
    }
    *v8 = 0;
    result = 0;
    *(_WORD *)(a1 + 154) = 0;
  }
  return result;
}
