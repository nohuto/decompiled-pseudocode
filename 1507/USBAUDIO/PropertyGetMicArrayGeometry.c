/*
 * XREFs of PropertyGetMicArrayGeometry @ 0x1C0018D90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0007F00 (memmove.c)
 *     GetMicArrayGeometryInfo @ 0x1C0018C50 (GetMicArrayGeometryInfo.c)
 */

__int64 __fastcall PropertyGetMicArrayGeometry(IRP *a1, __int64 a2, void *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Options; // ebx
  unsigned int Length; // ebp
  PKSFILTER FilterFromIrp; // rax
  unsigned __int16 *v10; // rdx
  int v11; // edi
  int MicArrayGeometryInfo; // eax
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // rbx
  unsigned __int16 *v16; // [rsp+40h] [rbp+8h] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  v10 = 0LL;
  v16 = 0LL;
  if ( Options >= 0x20 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
    {
      if ( FilterFromIrp )
      {
        MicArrayGeometryInfo = GetMicArrayGeometryInfo(FilterFromIrp, *(_DWORD *)(a2 + 24), &v16);
        v10 = v16;
        v11 = MicArrayGeometryInfo;
      }
      else
      {
        v11 = -1073741275;
      }
      if ( v11 >= 0 )
      {
        v13 = 12 * ((unsigned int)v10[8] - 1) + 30;
        if ( Length )
        {
          if ( Length >= (unsigned int)v13 )
          {
            v14 = (unsigned int)v13;
            memmove(a3, v10, (unsigned int)v13);
            a1->IoStatus.Information = v14;
            return (unsigned int)v11;
          }
          v11 = -1073741789;
        }
        else
        {
          v11 = -2147483643;
        }
        a1->IoStatus.Information = v13;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return (unsigned int)v11;
}
