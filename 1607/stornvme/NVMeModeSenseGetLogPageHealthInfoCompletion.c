/*
 * XREFs of NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C000A820
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0007514 (NVMeFreeDmaBuffer.c)
 *     GetSrbScsiData @ 0x1C0009628 (GetSrbScsiData.c)
 */

__int64 __fastcall NVMeModeSenseGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rdi
  _BYTE *v5; // r12
  __int64 SrbScsiData; // rax
  __int64 v7; // rbx
  unsigned int *v8; // rsi
  __int64 v9; // rbp
  bool v10; // zf
  _BYTE *v11; // r15
  char *SrbDataBuffer; // rax
  char *v13; // rbx
  __int16 v14; // ax
  char v15; // al
  char v16; // cl
  char v17; // cl
  char *v18; // rbx
  char v19; // al
  __int64 result; // rax
  unsigned int *v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h]

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_BYTE **)(SrbExtension + 4200);
  SrbScsiData = GetSrbScsiData(a2, 0LL, 0LL, 0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 1080);
  v8 = 0LL;
  LODWORD(v9) = 0;
  v21 = 0LL;
  v10 = *(_BYTE *)(a2 + 3) == 1;
  v11 = (_BYTE *)SrbScsiData;
  v22 = v7;
  if ( v10 )
  {
    SrbDataBuffer = (char *)GetSrbDataBuffer(a2, &v21);
    v8 = v21;
    v13 = SrbDataBuffer;
    NVMeZeroMemory(SrbDataBuffer, *v21);
    v14 = 26;
    if ( *v11 == 26 )
    {
      v9 = 4LL;
      v15 = 23;
      if ( *v8 < 0x18 )
        v15 = 15;
      v13[2] |= 0x10u;
      v16 = v13[2];
      *v13 = v15;
      v13[1] = 0;
      if ( (*v5 & 8) != 0 )
        v13[2] = v16 | 0x80;
    }
    else
    {
      v9 = 8LL;
      if ( *v8 < 0x1C )
        v14 = 18;
      v13[1] = v14;
      LOWORD(v21) = v14;
      *v13 = HIBYTE(v14);
      v13[3] |= 0x10u;
      v17 = v13[3];
      v13[2] = 0;
      if ( (*v5 & 8) != 0 )
        v13[3] = v17 | 0x80;
    }
    v18 = &v13[v9];
    v19 = *v18 & 0x40;
    v18[1] = 10;
    v18[2] &= 0xFAu;
    *v18 = v19 | 8;
    v7 = v22;
  }
  result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(SrbExtension + 4232), *(_QWORD *)(SrbExtension + 4200));
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_DWORD *)(SrbExtension + 4232) = 0;
  *(_QWORD *)(SrbExtension + 4224) = 0LL;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( (*(_BYTE *)(v7 + 525) & 1) != 0 )
    {
      *(_BYTE *)(a2 + 3) = 0;
      *(_BYTE *)(SrbExtension + 4245) = *(_BYTE *)(SrbExtension + 4245) & 0xF8 | 1;
      SrbAssignQueueId(a1, a2);
      memset((void *)(SrbExtension + 4096), 0, 0x40uLL);
      *(_BYTE *)(SrbExtension + 4096) = 10;
      *(_BYTE *)(SrbExtension + 4136) = 6;
      *(_QWORD *)(SrbExtension + 4216) = NVMeGetFeaturesCacheCompletion;
      return ProcessCommand(a1, a2);
    }
    result = (unsigned int)(v9 + 20);
    if ( *v8 < (unsigned __int64)(unsigned int)v9 + 20 )
      result = (unsigned int)(v9 + 12);
    *v8 = result;
  }
  *(_BYTE *)(SrbExtension + 4245) |= 8u;
  return result;
}
