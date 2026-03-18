/*
 * XREFs of QueryTemperatureThresholdCompletion @ 0x1C000B7F0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C00087FC (BuildGetFeaturesTemperatureThresholdCommand.c)
 */

__int64 __fastcall QueryTemperatureThresholdCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 SrbDataBuffer; // rax
  _WORD *v8; // r10
  __int64 v9; // r11
  char v10; // bl
  unsigned int v11; // esi
  __int64 v12; // r9
  __int16 v13; // r8
  unsigned int v14; // ecx
  __int16 v15; // r8
  __int64 v16; // rdx
  unsigned __int8 v17; // si
  char v18; // al
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  result = GetSrbExtension(a2);
  v6 = result;
  if ( *(_BYTE *)(v5 + 3) == 1 )
  {
    SrbDataBuffer = GetSrbDataBuffer(v4, &v19);
    v10 = 0;
    LODWORD(v19) = *(_DWORD *)(v6 + 4224);
    v11 = WORD1(v19);
    v12 = SrbDataBuffer;
    if ( BYTE2(v19) )
    {
      if ( *v8 )
        v13 = *v8 - 273;
      else
        v13 = 0x8000;
      v14 = (unsigned int)v19 >> 8;
      result = 2LL * BYTE1(v19);
      *(_WORD *)(v12 + 8 * result + 58) = v13;
      *(_BYTE *)(v12 + 8 * result + 61) = 1;
    }
    else
    {
      if ( *v8 )
        v15 = *v8 - 273;
      else
        v15 = 0x8000;
      v14 = (unsigned int)v19 >> 8;
      v16 = 2LL * BYTE1(v19);
      result = 2 * (BYTE1(v19) + 2LL);
      *(_WORD *)(v12 + 8 * v16 + 56) = v15;
      *(_BYTE *)(v12 + 16 * ((unsigned __int8)v14 + 2LL) + 28) = 1;
      *(_BYTE *)(v12 + 8 * v16 + 62) = 1;
    }
    if ( !(_BYTE)v11 )
    {
      if ( (_BYTE)v14 || (result = *(_QWORD *)(a1 + 1080), *(_WORD *)(result + 266)) )
      {
        v17 = BYTE1(v19);
        v10 = 1;
LABEL_17:
        v18 = *(_BYTE *)(v6 + 4245) & 0xFD;
        BYTE2(v19) = v10;
        *(_BYTE *)(v6 + 4245) = v18 | 1;
        SrbAssignQueueId(a1, v9);
        BuildGetFeaturesTemperatureThresholdCommand(v6 + 4096, v17, v10);
        *(_BYTE *)(v6 + 4245) &= ~4u;
        *(_QWORD *)(v6 + 4216) = QueryTemperatureThresholdCompletion;
        result = (unsigned int)v19;
        *(_QWORD *)(v6 + 4224) = (unsigned int)v19;
        return result;
      }
    }
    if ( BYTE1(v19) < (unsigned __int8)v19 )
    {
      v17 = ++BYTE1(v19);
      goto LABEL_17;
    }
    *(_BYTE *)(v6 + 4245) |= 8u;
  }
  else
  {
    *(_BYTE *)(result + 4245) |= 8u;
  }
  return result;
}
