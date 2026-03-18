/*
 * XREFs of AlpcpProbeMessageAttributes @ 0x140480C64
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     AlpcpGetMessageAttributeSize32 @ 0x1404BA248 (AlpcpGetMessageAttributeSize32.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProbeMessageAttributes(int a1, int *a2, char a3)
{
  ULONG64 v3; // r9
  char v4; // r10
  int v5; // ebx
  ULONG v6; // r8d
  unsigned int MessageAttributeSize32; // ecx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx

  v3 = (ULONG64)a2;
  v4 = a3;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (int *)MmUserProbeAddress;
  v5 = *a2;
  if ( (a1 & 0xC0000000) == 0x80000000 )
  {
    MessageAttributeSize32 = AlpcpGetMessageAttributeSize32((unsigned int)v5);
    v6 = 4;
  }
  else
  {
    v6 = 8;
    MessageAttributeSize32 = 8;
    if ( v5 < 0 )
      MessageAttributeSize32 = 32;
    if ( (v5 & 0x40000000) != 0 )
      MessageAttributeSize32 += 32;
    if ( (v5 & 0x20000000) != 0 )
      MessageAttributeSize32 += 32;
    if ( (v5 & 0x10000000) != 0 )
      MessageAttributeSize32 += 24;
    if ( (v5 & 0x8000000) != 0 )
      MessageAttributeSize32 += 24;
    if ( (v5 & 0x4000000) != 0 )
      MessageAttributeSize32 += 8;
  }
  if ( v4 || (v5 & 0xA0000000) != 0 )
  {
    if ( (unsigned __int64)MessageAttributeSize32 - 1 > 0xFFE )
    {
      ProbeForWrite((volatile void *)v3, MessageAttributeSize32, v6);
    }
    else
    {
      if ( ((v6 - 1) & (unsigned int)v3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_BYTE *)v3 = *(_BYTE *)v3;
      *(_BYTE *)(v3 + MessageAttributeSize32 - 1) = *(_BYTE *)(v3 + MessageAttributeSize32 - 1);
    }
  }
  else
  {
    v9 = MessageAttributeSize32;
    if ( MessageAttributeSize32 )
    {
      v10 = v6 - 1;
      if ( v9 >= 0x10000 )
      {
        if ( (v10 & v3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 + v3 > MmUserProbeAddress || v9 + v3 < v3 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      else if ( (v10 & v3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
  }
  return (unsigned int)v5;
}
