/*
 * XREFs of USBCaptureCopyRequestToBuffer @ 0x1C0022480
 * Callers:
 *     USBCaptureProcessPin @ 0x1C0005260 (USBCaptureProcessPin.c)
 * Callees:
 *     WPP_RECORDER_SF_qdd @ 0x1C000139C (WPP_RECORDER_SF_qdd.c)
 *     memmove @ 0x1C0007F00 (memmove.c)
 */

__int64 __fastcall USBCaptureCopyRequestToBuffer(__int64 a1, struct _KSSTREAM_POINTER *a2, _BYTE *a3)
{
  PKSPIN Pin; // r10
  ULONG Remaining; // ebx
  _QWORD *Context; // rcx
  unsigned __int16 *v8; // r11
  __int64 v9; // r13
  unsigned __int64 v10; // r9
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int16 *v14; // rsi
  char v15; // al
  const void *v16; // r15
  ULONG v17; // r14d
  ULONG v18; // edi
  ULONG v19; // [rsp+80h] [rbp+8h]
  _QWORD *v20; // [rsp+88h] [rbp+10h]

  Pin = a2->Pin;
  Remaining = a2->OffsetOut.Remaining;
  v19 = Remaining;
  Context = Pin->Context;
  v8 = *(unsigned __int16 **)(a1 + 24);
  *a3 = 0;
  v20 = Context;
  v9 = Context[17];
  v10 = *v8;
  v11 = *(unsigned int *)(v9 + 92);
  if ( v10 < 12 * v11 + 152 )
    return WPP_RECORDER_SF_qdd(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             3u,
             0x14u,
             (__int64)&WPP_ddbe84fb90e1895f15dcd3eb4541c966_Traceguids,
             Pin,
             v10,
             12 * (int)v11 + 152);
  v13 = *(unsigned int *)(a1 + 32);
  v14 = &v8[6 * v13 + 70];
  if ( *((int *)v14 + 2) < 0 || (v15 = 0, !*((_DWORD *)v14 + 1)) )
    v15 = 1;
  if ( (unsigned int)v13 < (unsigned int)v11 )
  {
    do
    {
      if ( !v15 )
        break;
      v14 += 6;
      a2->StreamHeader->OptionsFlags |= 4u;
      ++*(_DWORD *)(a1 + 32);
      if ( *((int *)v14 + 2) >= 0 )
      {
        v15 = 0;
        if ( *((_DWORD *)v14 + 1) )
          continue;
      }
      v15 = 1;
    }
    while ( *(_DWORD *)(a1 + 32) < *(_DWORD *)(v9 + 92) );
  }
  result = *(unsigned int *)(v9 + 92);
  if ( *(_DWORD *)(a1 + 32) < (unsigned int)result )
  {
LABEL_13:
    v16 = (const void *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)v14);
    v17 = *((_DWORD *)v14 + 1);
    while ( v17 && Remaining && *(_BYTE *)(v9 + 80) )
    {
      v18 = v17;
      if ( Remaining < v17 )
        v18 = Remaining;
      memmove(a2->OffsetOut.Data, v16, v18);
      v17 -= v18;
      v20[8] += v18;
      v19 -= v18;
      Remaining = v19;
      KsStreamPointerAdvanceOffsets(a2, 0, v18, 0);
      if ( v19 )
      {
        while ( 1 )
        {
          result = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
          *(_DWORD *)(a1 + 32) = result;
          if ( (unsigned int)result >= *(_DWORD *)(v9 + 92) )
            break;
          v14 += 6;
          if ( *((int *)v14 + 2) >= 0 )
            goto LABEL_13;
          a2->StreamHeader->OptionsFlags |= 4u;
        }
      }
      else
      {
        result = (__int64)a3;
        *a3 = 1;
        if ( v17 )
        {
          result = *((_DWORD *)v14 + 1) - v17;
          *((_DWORD *)v14 + 1) = v17;
          *(_DWORD *)v14 += result;
        }
        else
        {
          ++*(_DWORD *)(a1 + 32);
        }
      }
    }
  }
  return result;
}
