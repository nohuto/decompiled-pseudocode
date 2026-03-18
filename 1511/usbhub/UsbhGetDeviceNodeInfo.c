/*
 * XREFs of UsbhGetDeviceNodeInfo @ 0x1C004DA10
 * Callers:
 *     UsbhPdoQueryWmiDataBlock @ 0x1C004E080 (UsbhPdoQueryWmiDataBlock.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhBuildTopologyAddress @ 0x1C001E69C (UsbhBuildTopologyAddress.c)
 *     memmove @ 0x1C0028E40 (memmove.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhGetDeviceInformationEx @ 0x1C00474D0 (UsbhGetDeviceInformationEx.c)
 */

__int64 __fastcall UsbhGetDeviceNodeInfo(__int64 a1, _DWORD *a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  size_t v6; // r12
  unsigned int v8; // esi
  _DWORD *v9; // r15
  __int64 v10; // r13
  __int64 result; // rax
  _DWORD *DeviceInformation; // rax
  _DWORD *v13; // rdi
  unsigned int v14; // ebp
  __int64 v15; // r9
  __int64 PortData; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // [rsp+60h] [rbp+18h] BYREF

  v6 = (unsigned int)a3;
  v8 = 0;
  v9 = PdoExt(a1, (__int64)a2, a3, (__int64)a4);
  v23 = 0;
  v10 = *((_QWORD *)v9 + 147);
  if ( (unsigned int)v6 < 0x4B2 )
  {
    *a4 = 1202;
    return 3221225507LL;
  }
  DeviceInformation = UsbhGetDeviceInformationEx(v10, &v23, a5);
  v13 = DeviceInformation;
  if ( v23 >= 0 )
  {
    v14 = 11 * DeviceInformation[12] + 1191;
    if ( v14 > (unsigned int)v6 )
    {
      *a4 = v14;
      ExFreePoolWithTag(DeviceInformation, 0);
      return 3221225507LL;
    }
    memset(a2, 0, v6);
    *a2 = 1431519822;
    a2[1] = v14;
    *(_OWORD *)(a2 + 2) = *(_OWORD *)((char *)v9 + 2418);
    *(_OWORD *)(a2 + 6) = *(_OWORD *)((char *)v9 + 2434);
    *(_OWORD *)(a2 + 10) = *(_OWORD *)((char *)v9 + 2450);
    *(_OWORD *)(a2 + 14) = *(_OWORD *)((char *)v9 + 2466);
    *(_OWORD *)(a2 + 18) = *(_OWORD *)((char *)v9 + 2482);
    a2[22] = 0;
    UsbhBuildTopologyAddress(v10, a2 + 23, *((unsigned __int16 *)v9 + 710), v15);
    *(_OWORD *)((char *)a2 + 130) = *((_OWORD *)v9 + 87);
    *((_WORD *)a2 + 73) = *((_WORD *)v9 + 704);
    *(_DWORD *)((char *)a2 + 149) = v9[290];
    *((_WORD *)a2 + 64) = *((_WORD *)v9 + 710);
    *((_BYTE *)a2 + 148) = *((_BYTE *)v13 + 32);
    *(_WORD *)((char *)a2 + 153) = *((_WORD *)v13 + 17);
    PortData = UsbhGetPortData(v10, *((_WORD *)v9 + 710));
    if ( PortData )
    {
      *(_DWORD *)((char *)a2 + 155) = *(unsigned __int16 *)(PortData + 4);
      *(_DWORD *)((char *)a2 + 159) = *(_DWORD *)(PortData + 428);
    }
    *(_DWORD *)((char *)a2 + 1187) = v13[12];
    if ( v13[12] )
    {
      do
      {
        v17 = v8++;
        v18 = 11 * (v17 + 97);
        *(_DWORD *)((char *)a2 + v18 + 124) = v13[3 * v17 + 13];
        *(_WORD *)((char *)a2 + v18 + 128) = v13[3 * v17 + 14];
        *((_BYTE *)a2 + v18 + 130) = BYTE2(v13[3 * v17 + 14]);
        *(_DWORD *)((char *)a2 + 11 * v17 + 1198) = v13[3 * v17 + 15];
      }
      while ( v8 < v13[12] );
    }
    ExFreePoolWithTag(v13, 0);
    v19 = v9[523];
    if ( v19 > 0x100 )
      v19 = 256;
    memmove((char *)a2 + 163, *((const void **)v9 + 262), v19);
    v20 = v9[527];
    if ( v20 > 0x100 )
      v20 = 256;
    memmove((char *)a2 + 419, *((const void **)v9 + 264), v20);
    v21 = v9[531];
    if ( v21 > 0x100 )
      v21 = 256;
    memmove((char *)a2 + 675, *((const void **)v9 + 266), v21);
    v22 = v9[551];
    if ( v22 > 0x100 )
      v22 = 256;
    memmove((char *)a2 + 931, *((const void **)v9 + 276), v22);
    result = 0LL;
    *a4 = v14;
  }
  else
  {
    *a4 = 0;
    return 3221225629LL;
  }
  return result;
}
