/*
 * XREFs of IopSymlinkCreateECP @ 0x14054128C
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140541420 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405414C4 (IopSymlinkAllocateAndAddECP.c)
 */

__int64 __fastcall IopSymlinkCreateECP(PIRP Irp, __int64 a2, unsigned __int16 *a3, __int16 a4, _QWORD *a5)
{
  unsigned __int16 v6; // r8
  IRP *v8; // r11
  char v9; // bp
  __int64 v10; // rcx
  _QWORD *v11; // r14
  __int64 FileObjectExtension; // rax
  __int64 v13; // rsi
  unsigned int v14; // edi
  __int64 result; // rax
  __int64 v16; // rdx
  _WORD *v17; // rdi
  __int16 v18; // [rsp+20h] [rbp-48h]
  __int16 v19; // [rsp+20h] [rbp-48h]
  __int16 v20; // [rsp+30h] [rbp-38h]
  __int16 v21; // [rsp+30h] [rbp-38h]
  __int16 v22; // [rsp+38h] [rbp-30h]
  __int16 v23; // [rsp+38h] [rbp-30h]
  __int16 v24; // [rsp+40h] [rbp-28h]
  __int16 v25; // [rsp+40h] [rbp-28h]
  PVOID EcpContext; // [rsp+78h] [rbp+10h] BYREF

  v6 = *a3;
  EcpContext = 0LL;
  v8 = Irp;
  v9 = 0;
  if ( v6 > 2u && *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * ((unsigned __int64)v6 >> 1) - 2) == 92 )
  {
    v9 = 1;
    *a3 = v6 - 2;
  }
  v10 = *(_QWORD *)(a2 + 64);
  v11 = a5;
  if ( !v10 || (FileObjectExtension = IopGetFileObjectExtension(v10, 5, 0LL), (v13 = FileObjectExtension) == 0) )
  {
    result = IopSymlinkAllocateAndAddECP(v8, &EcpContext);
    if ( (int)result < 0 )
      goto LABEL_13;
    v25 = 0;
    v23 = a4;
    v17 = EcpContext;
    v21 = 0;
    v19 = 0;
    IopSymlinkInitializeSymlinkInfo(
      EcpContext,
      (unsigned int)*a3 + 32,
      *((_QWORD *)a3 + 1),
      *a3,
      v19,
      0LL,
      v21,
      v23,
      v25,
      0LL);
    goto LABEL_12;
  }
  v14 = *(unsigned __int16 *)(FileObjectExtension + 16) + *a3 + 2;
  if ( v14 >= 0xFFFF )
  {
    result = 3221225734LL;
    goto LABEL_13;
  }
  result = IopSymlinkAllocateAndAddECP(v8, &EcpContext);
  if ( (int)result >= 0 )
  {
    v16 = v14 + 32;
    v17 = EcpContext;
    v24 = *(_WORD *)(v13 + 2);
    v22 = *(_WORD *)(v13 + 4);
    v20 = *(_WORD *)(v13 + 16);
    v18 = 0;
    IopSymlinkInitializeSymlinkInfo(
      EcpContext,
      v16,
      *((_QWORD *)a3 + 1),
      *a3,
      v18,
      *(_QWORD *)(v13 + 24),
      v20,
      v22,
      v24,
      0LL);
    *v17 = *(_WORD *)v13 + v17[8] - *(_WORD *)(v13 + 16);
LABEL_12:
    *v11 = v17;
    result = 0LL;
  }
LABEL_13:
  if ( v9 )
    *a3 += 2;
  if ( (int)result < 0 )
    *v11 = 0LL;
  return result;
}
