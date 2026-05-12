/*
 * XREFs of RaUnitAtaPassThroughValidateInput @ 0x1C0001664
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall RaUnitAtaPassThroughValidateInput(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Length; // r15d
  __int64 Options; // rsi
  int v9; // edi
  _IRP *MasterIrp; // rdx
  _IRP *v11; // rbx
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // r9
  unsigned int v14; // r8d
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  char v17; // cl
  unsigned __int16 Size; // ax
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  _BYTE *v22; // rcx
  const char *i; // rdx
  __int128 v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  _IRP *v27; // [rsp+40h] [rbp-48h]
  _LIST_ENTRY *Flink; // [rsp+48h] [rbp-40h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v9 = 0;
  if ( IoIs32bitProcess(a2) )
  {
    if ( (unsigned int)Options < 0x28 )
      return 3221225485LL;
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp->Type == 40 )
    {
      Size = MasterIrp->Size;
      if ( (Size & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (Size & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
        return 3221225485LL;
      v11 = (_IRP *)&v24;
      v20 = *(_OWORD *)&MasterIrp->Type;
      Flink = MasterIrp->ThreadListEntry.Flink;
      v21 = *(_QWORD *)&MasterIrp->Flags;
      v27 = MasterIrp->AssociatedIrp.MasterIrp;
      v26 = *(&MasterIrp->Flags + 1);
      v24 = v20;
      v25 = v21;
      goto LABEL_7;
    }
    return 3221225561LL;
  }
  if ( (unsigned int)Options < 0x30 )
    return 3221225485LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v11 = MasterIrp;
  if ( MasterIrp->Type != 48 )
    return 3221225561LL;
  v12 = MasterIrp->Size;
  if ( (v12 & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (v12 & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
    return 3221225485LL;
LABEL_7:
  if ( a3 )
  {
    v16 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 152LL);
    if ( (v16 & (__int64)v11->AssociatedIrp.MasterIrp) == 0 )
      goto LABEL_15;
    return 3221225485LL;
  }
  v13 = (unsigned __int64)v11->AssociatedIrp.MasterIrp;
  if ( (unsigned __int16)v11->Type > v13 && LODWORD(v11->MdlAddress) )
    return 3221225485LL;
  if ( v13 > 0xFFFFFFFF )
    return 3221225621LL;
  v14 = v13 + LODWORD(v11->MdlAddress);
  if ( v14 < (unsigned int)v13 )
    return 3221225621LL;
  v15 = v11->Size;
  if ( (v15 & 4) != 0 && v14 > (unsigned int)Options )
    return 3221225485LL;
  if ( (v15 & 2) != 0 && v14 > Length )
    return 3221225485LL;
  v16 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 152LL);
  if ( (((unsigned __int64)MasterIrp + v13) & v16) != 0 )
    return 3221225485LL;
LABEL_15:
  if ( ((unsigned int)v16 & (__int64)v11->MdlAddress) != 0 || (unsigned int)(HIDWORD(v11->MdlAddress) - 1) > 0x1A5DF )
    return 3221225485LL;
  if ( Length > (unsigned int)Options )
    memset((char *)MasterIrp + Options, 0, Length - (unsigned int)Options);
  v17 = BYTE6(v11->ThreadListEntry.Blink);
  if ( v17 != -76 || g_InWinPE )
  {
    if ( v17 != -15 )
      return 0LL;
    if ( !a3 )
    {
      if ( g_InWinPE )
      {
        v22 = (char *)v11->AssociatedIrp.MasterIrp + (unsigned __int64)a2->AssociatedIrp.MasterIrp;
        if ( (unsigned int)Options >= 0x230 && LODWORD(v11->MdlAddress) >= 0x200 && (*v22 & 1) == 0 )
        {
          for ( i = "AutoATAWindowsString12345678901";
                *(unsigned __int8 *)i == i[v22 + 2 - "AutoATAWindowsString12345678901"];
                ++i )
          {
            if ( (unsigned int)++v9 >= 0x20 )
              return 0LL;
          }
        }
      }
    }
    return 3221225485LL;
  }
  return 3221225659LL;
}
