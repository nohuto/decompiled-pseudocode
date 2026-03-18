/*
 * XREFs of QueryTemperatureInfoHealthLogCompletion @ 0x1C000B620
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0007514 (NVMeFreeDmaBuffer.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C00087FC (BuildGetFeaturesTemperatureThresholdCommand.c)
 */

__int64 __fastcall QueryTemperatureInfoHealthLogCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r9
  _WORD *v8; // r8
  __int16 v9; // dx
  __int16 v10; // dx
  _WORD *v11; // rax
  __int16 v12; // dx
  unsigned __int16 v13; // dx
  _WORD *v14; // r11
  unsigned __int16 v15; // r10
  unsigned int *v16; // rsi
  __int64 v17; // r8
  __int16 v18; // ax
  __int64 v19; // r8
  unsigned int v20; // [rsp+68h] [rbp+10h]
  unsigned int *v21; // [rsp+78h] [rbp+20h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v21 = 0LL;
  v5 = SrbExtension;
  result = GetSrbDataBuffer(a2, &v21);
  v7 = result;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v8 = *(_WORD **)(v5 + 4200);
    HIBYTE(v20) = 0;
    v9 = *(_WORD *)((char *)v8 + 1);
    *(_WORD *)(result + 52) = 0;
    if ( v9 )
      v10 = v9 - 273;
    else
      v10 = 0x8000;
    *(_WORD *)(result + 54) = v10;
    v11 = v8 + 107;
    v12 = 8;
    *(_DWORD *)(v7 + 56) = -2147450880;
    do
    {
      if ( *v11 )
        break;
      --v11;
      --v12;
    }
    while ( v12 );
    v13 = v12 + 1;
    v14 = v8 + 100;
    *(_WORD *)(v7 + 40) = v13;
    v15 = 1;
    if ( v13 > 1u )
    {
      v16 = v21;
      do
      {
        v17 = 16LL * v15;
        if ( *v16 < (unsigned __int64)(v17 + 40) )
          break;
        *(_WORD *)(v17 + v7 + 52) = v15;
        v18 = *v14 ? *v14 - 273 : 0x8000;
        ++v14;
        *(_WORD *)(v17 + v7 + 54) = v18;
        ++v15;
        *(_DWORD *)(v17 + v7 + 56) = -2147450880;
      }
      while ( v15 < v13 );
    }
    LOBYTE(v20) = v15 - 1;
    *(_WORD *)((char *)&v20 + 1) = 0;
    *(_BYTE *)(v5 + 4245) = *(_BYTE *)(v5 + 4245) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    BuildGetFeaturesTemperatureThresholdCommand(v5 + 4096, 0, 0);
    *(_BYTE *)(v5 + 4245) &= ~4u;
    *(_QWORD *)(v5 + 4216) = QueryTemperatureThresholdCompletion;
    *(_QWORD *)(v5 + 4224) = v20;
    result = ProcessCommand(a1, a2);
  }
  else
  {
    *(_BYTE *)(v5 + 4245) |= 8u;
  }
  v19 = *(_QWORD *)(v5 + 4200);
  if ( v19 )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v5 + 4232), v19);
  *(_QWORD *)(v5 + 4200) = 0LL;
  *(_DWORD *)(v5 + 4232) = 0;
  return result;
}
