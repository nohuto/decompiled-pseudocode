/*
 * XREFs of PropertyGetPinName @ 0x1C0017750
 * Callers:
 *     <none>
 * Callees:
 *     RegistryReadNameValue @ 0x1C0019B3C (RegistryReadNameValue.c)
 */

__int64 __fastcall PropertyGetPinName(IRP *a1, __int64 a2, _WORD *a3)
{
  NTSTATUS v6; // ebx
  unsigned __int64 Length; // rsi
  PKSFILTER FilterFromIrp; // rax
  __int64 v9; // rdx
  _QWORD *Context; // rcx
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // r11
  unsigned int v12; // eax
  __int64 v13; // r10
  __int64 v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // r8
  unsigned __int16 v17; // dx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  __int16 v21; // ax
  const GUID *v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  __int16 v27; // ax
  unsigned int v29; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+28h] [rbp-18h] BYREF

  v6 = -1073741275;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v29 = 0;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( !FilterFromIrp )
    return (unsigned int)v6;
  v9 = *(unsigned int *)(a2 + 24);
  if ( (unsigned int)v9 >= FilterFromIrp->Descriptor->PinDescriptorsCount )
    return (unsigned int)v6;
  Context = FilterFromIrp->Context;
  PinDescriptors = FilterFromIrp->Descriptor->PinDescriptors;
  v12 = 0;
  v13 = 22 * v9;
  v14 = Context[2];
  v15 = *(_DWORD *)(v14 + 192);
  v16 = *(_QWORD *)(v14 + 200);
  if ( !v15 )
    goto LABEL_27;
  do
  {
    if ( *(_DWORD *)(v16 + 84) == (_DWORD)v9 )
      break;
    v16 += 152LL;
    ++v12;
  }
  while ( v12 < v15 );
  if ( v12 >= v15 || (v17 = *(_WORD *)(v16 + 112)) == 0 )
  {
LABEL_27:
    v22 = (&PinDescriptors->PinDescriptor.Name)[v13];
    if ( v22 || (v22 = (&PinDescriptors->PinDescriptor.Category)[v13]) != 0LL )
    {
      v6 = RtlStringFromGUID(v22, &GuidString);
      if ( v6 >= 0 )
        v6 = RegistryReadNameValue((unsigned int)Length, a3, &v29, &GuidString);
    }
    else if ( (_DWORD)Length )
    {
      v23 = *(unsigned int *)(v14 + 32);
      if ( v23 + 2 >= Length )
        v29 = Length;
      else
        v29 = v23 + 2;
      v24 = Length >> 1;
      v6 = 0;
      if ( (Length >> 1) - 1 > 0x7FFFFFFE )
        v6 = -1073741811;
      if ( v6 < 0 )
      {
        if ( !v24 )
          goto LABEL_48;
      }
      else
      {
        v6 = 0;
        if ( !v24 )
          goto LABEL_44;
        v25 = 2147483646 - v24;
        v26 = *(_QWORD *)(v14 + 24) - (_QWORD)a3;
        do
        {
          if ( !(v25 + v24) )
            break;
          v27 = *(_WORD *)((char *)a3 + v26);
          if ( !v27 )
            break;
          *a3++ = v27;
          --v24;
        }
        while ( v24 );
        if ( !v24 )
        {
LABEL_44:
          --a3;
          v6 = -2147483643;
        }
      }
      *a3 = 0;
    }
    else
    {
      v29 = *(_DWORD *)(v14 + 32) + 2;
    }
LABEL_48:
    if ( v6 >= 0 )
    {
LABEL_51:
      a1->IoStatus.Information = v29;
      return (unsigned int)v6;
    }
    goto LABEL_49;
  }
  v6 = 0;
  if ( (_DWORD)Length )
  {
    if ( (unsigned __int64)v17 + 2 >= Length )
      v29 = Length;
    else
      v29 = v17 + 2;
    v18 = Length >> 1;
    if ( (Length >> 1) - 1 > 0x7FFFFFFE )
      v6 = -1073741811;
    if ( v6 < 0 )
    {
      if ( !v18 )
        goto LABEL_25;
    }
    else
    {
      v6 = 0;
      if ( !v18 )
        goto LABEL_21;
      v19 = 2147483646 - v18;
      v20 = *(_QWORD *)(v16 + 120) - (_QWORD)a3;
      do
      {
        if ( !(v19 + v18) )
          break;
        v21 = *(_WORD *)((char *)a3 + v20);
        if ( !v21 )
          break;
        *a3++ = v21;
        --v18;
      }
      while ( v18 );
      if ( !v18 )
      {
LABEL_21:
        --a3;
        v6 = -2147483643;
      }
    }
    *a3 = 0;
  }
  else
  {
    v29 = v17 + 2;
  }
LABEL_25:
  if ( v6 >= 0 )
  {
    v6 = (unsigned int)Length < *(unsigned __int16 *)(v16 + 112) ? 0x80000005 : 0;
    goto LABEL_48;
  }
LABEL_49:
  if ( v6 == -2147483643 || v6 == -1073741789 )
    goto LABEL_51;
  return (unsigned int)v6;
}
