/*
 * XREFs of AlpcpProbeMessageAttributes @ 0x14049D120
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14049CAB4 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     AlpcpGetMessageAttributeSize32 @ 0x1405298AC (AlpcpGetMessageAttributeSize32.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProbeMessageAttributes(int a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r11
  __int64 v4; // rax
  char v5; // r10
  unsigned __int64 v6; // r9
  unsigned int v7; // ebx
  ULONG v8; // r8d
  unsigned int MessageAttributeSize32; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rax

  v3 = 0x7FFFFFFF0000LL;
  v4 = a2;
  v5 = a3;
  v6 = a2;
  if ( a2 >= 0x7FFFFFFF0000LL )
    v4 = 0x7FFFFFFF0000LL;
  v7 = *(_DWORD *)v4;
  if ( (a1 & 0xC0000000) == 0x80000000 )
  {
    MessageAttributeSize32 = AlpcpGetMessageAttributeSize32(v7, 0x80000000LL, a3);
    v8 = 4;
  }
  else
  {
    v8 = 8;
    MessageAttributeSize32 = 8;
    if ( (v7 & 0x80000000) != 0 )
      MessageAttributeSize32 = 32;
    if ( (v7 & 0x40000000) != 0 )
      MessageAttributeSize32 += 32;
    if ( (v7 & 0x20000000) != 0 )
      MessageAttributeSize32 += 32;
    if ( (v7 & 0x10000000) != 0 )
      MessageAttributeSize32 += 24;
    if ( (v7 & 0x8000000) != 0 )
      MessageAttributeSize32 += 24;
    if ( (v7 & 0x4000000) != 0 )
      MessageAttributeSize32 += 8;
    if ( (v7 & 0x2000000) != 0 )
      MessageAttributeSize32 += 8;
  }
  if ( v5 || (v7 & 0xA0000000) != 0 )
  {
    if ( (unsigned __int64)MessageAttributeSize32 - 1 > 0xFFE )
    {
      ProbeForWrite((volatile void *)v6, MessageAttributeSize32, v8);
    }
    else
    {
      if ( ((v8 - 1) & (unsigned int)v6) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v6 >= v3 )
        v6 = v3;
      *(_BYTE *)v6 = *(_BYTE *)v6;
      *(_BYTE *)(v6 + MessageAttributeSize32 - 1) = *(_BYTE *)(v6 + MessageAttributeSize32 - 1);
    }
  }
  else
  {
    v11 = MessageAttributeSize32;
    if ( MessageAttributeSize32 )
    {
      v12 = v8 - 1;
      if ( MessageAttributeSize32 >= 0x10000uLL )
      {
        if ( (v12 & v6) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = (_BYTE *)(MessageAttributeSize32 + v6);
        if ( v11 + v6 > v3 || (unsigned __int64)v13 < v6 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else if ( (v12 & v6) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
  }
  return v7;
}
