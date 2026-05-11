/*
 * XREFs of USBType1Create1MsecBuffers @ 0x1C0020050
 * Callers:
 *     USBType1RenderCreatePin @ 0x1C0020250 (USBType1RenderCreatePin.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x1C001B374 (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBType1Create1MsecBuffers(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  void *v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // r14
  unsigned int v13; // ebp
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  PIRP Irp; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  PVOID PoolWithTag; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v22; // [rsp+80h] [rbp+18h]
  __int64 v23; // [rsp+88h] [rbp+20h]

  v22 = *(_QWORD **)(a1 + 16);
  v2 = v22[17];
  v3 = *(_DWORD *)(v22[16] + 212LL) & 0x3FF;
  v23 = v3;
  v4 = v3 + 7;
  v5 = 0x1000uLL / (v3 + 7);
  if ( (_DWORD)v5 )
  {
    v7 = 0xC / (unsigned int)v5 + (0xC % (unsigned int)v5 != 0);
  }
  else
  {
    v6 = v4 >> 12;
    if ( (v4 & 0xFFF) != 0 )
      LODWORD(v6) = v6 + 1;
    v7 = 12 * v6;
  }
  v8 = *(void **)(a1 + 8);
  v9 = v7 << 12;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, ((_DWORD)v9 + 6147) & 0xFFFFF000, 0x41627845u);
  v10 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
    v11 = USBHwAllocateAndBag(&PoolWithTag, v8);
  else
    v11 = -1073741670;
  if ( v11 >= 0 )
  {
    v12 = v2 + 120;
    v13 = 0;
    v14 = v9 + v10;
    *(_QWORD *)(v2 + 128) = v2 + 120;
    *(_QWORD *)(v2 + 120) = v2 + 120;
    v15 = v2 + 168;
    while ( v11 >= 0 )
    {
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v22[2] + 40LL) + 76LL), 0);
      *(_QWORD *)(v15 + 16) = Irp;
      if ( Irp )
      {
        v11 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
        if ( v11 >= 0 )
        {
          *(_QWORD *)(v15 + 40) = a1;
          v17 = v23;
          *(_QWORD *)(v15 + 48) = v10;
          v10 = (v4 + v10) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v15 + 24) = v14;
          if ( ((v10 ^ (v10 + v17)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
            v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          v18 = *(_QWORD **)(v2 + 128);
          v14 = (v14 + 171) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)v15 = v12;
          *(_QWORD *)(v15 + 8) = v18;
          if ( *v18 != v12 )
            __fastfail(3u);
          *v18 = v15;
          *(_QWORD *)(v2 + 128) = v15;
        }
        else
        {
          IoFreeIrp(*(PIRP *)(v15 + 16));
        }
      }
      else
      {
        v11 = -1073741670;
      }
      ++v13;
      v15 += 56LL;
      if ( v13 >= 0xC )
      {
        if ( v11 >= 0 )
          KeInitializeSemaphore((PRKSEMAPHORE)(v2 + 136), 12, 12);
        return (unsigned int)v11;
      }
    }
  }
  return (unsigned int)v11;
}
