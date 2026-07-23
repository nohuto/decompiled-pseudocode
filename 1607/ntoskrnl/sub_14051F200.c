/*
 * XREFs of sub_14051F200 @ 0x14051F200
 * Callers:
 *     Callout @ 0x14051CEE0 (Callout.c)
 * Callees:
 *     QueryUpdateFileEaAllowedExt_0 @ 0x1400012E0 (QueryUpdateFileEaAllowedExt_0.c)
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeQueryTimeIncrement @ 0x140087980 (KeQueryTimeIncrement.c)
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     RtlULongLongAdd @ 0x14010D2A4 (RtlULongLongAdd.c)
 *     StringCbLengthW @ 0x14010D2B8 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     ZwSetCachedSigningLevel @ 0x14015D0B0 (ZwSetCachedSigningLevel.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     sub_140232740 @ 0x140232740 (sub_140232740.c)
 *     sub_140232D04 @ 0x140232D04 (sub_140232D04.c)
 *     sub_140233260 @ 0x140233260 (sub_140233260.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     sub_140498500 @ 0x140498500 (sub_140498500.c)
 *     sub_140498570 @ 0x140498570 (sub_140498570.c)
 *     sub_1404985E0 @ 0x1404985E0 (sub_1404985E0.c)
 *     sub_140498680 @ 0x140498680 (sub_140498680.c)
 *     sub_140498720 @ 0x140498720 (sub_140498720.c)
 *     sub_140498790 @ 0x140498790 (sub_140498790.c)
 *     sub_140498800 @ 0x140498800 (sub_140498800.c)
 *     sub_1404988B4 @ 0x1404988B4 (sub_1404988B4.c)
 *     sub_1404988D8 @ 0x1404988D8 (sub_1404988D8.c)
 *     sub_140498900 @ 0x140498900 (sub_140498900.c)
 *     sub_1404989B4 @ 0x1404989B4 (sub_1404989B4.c)
 *     sub_140498A28 @ 0x140498A28 (sub_140498A28.c)
 *     sub_140498A94 @ 0x140498A94 (sub_140498A94.c)
 *     sub_140498AB8 @ 0x140498AB8 (sub_140498AB8.c)
 *     sub_140498B1C @ 0x140498B1C (sub_140498B1C.c)
 *     sub_140498B38 @ 0x140498B38 (sub_140498B38.c)
 *     sub_140498BE4 @ 0x140498BE4 (sub_140498BE4.c)
 *     sub_140498C7C @ 0x140498C7C (sub_140498C7C.c)
 *     sub_140498D18 @ 0x140498D18 (sub_140498D18.c)
 *     sub_140498DB0 @ 0x140498DB0 (sub_140498DB0.c)
 *     sub_140498E4C @ 0x140498E4C (sub_140498E4C.c)
 *     sub_140498EB4 @ 0x140498EB4 (sub_140498EB4.c)
 *     sub_140498F4C @ 0x140498F4C (sub_140498F4C.c)
 *     sub_140498FE8 @ 0x140498FE8 (sub_140498FE8.c)
 *     sub_14049909C @ 0x14049909C (sub_14049909C.c)
 *     FsRtlQueryKernelEaFile @ 0x1404B33F8 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404B5000 (FsRtlKernelFsControlFile.c)
 *     SPCallServerHandleClepKdf @ 0x1404C4E60 (SPCallServerHandleClepKdf.c)
 *     FsRtlSetKernelEaFile @ 0x1404CB0F8 (FsRtlSetKernelEaFile.c)
 *     sub_1406BC338 @ 0x1406BC338 (sub_1406BC338.c)
 *     sub_1406BC718 @ 0x1406BC718 (sub_1406BC718.c)
 *     sub_1406BC980 @ 0x1406BC980 (sub_1406BC980.c)
 *     sub_1406BCBF8 @ 0x1406BCBF8 (sub_1406BCBF8.c)
 *     sub_1406BCFBC @ 0x1406BCFBC (sub_1406BCFBC.c)
 *     sub_1406BD5D4 @ 0x1406BD5D4 (sub_1406BD5D4.c)
 *     sub_1406BDC4C @ 0x1406BDC4C (sub_1406BDC4C.c)
 *     sub_1406BE068 @ 0x1406BE068 (sub_1406BE068.c)
 *     sub_1406BEA18 @ 0x1406BEA18 (sub_1406BEA18.c)
 *     sub_1406BF234 @ 0x1406BF234 (sub_1406BF234.c)
 *     sub_1406BF57C @ 0x1406BF57C (sub_1406BF57C.c)
 *     sub_1406BFBA8 @ 0x1406BFBA8 (sub_1406BFBA8.c)
 *     sub_1406C029C @ 0x1406C029C (sub_1406C029C.c)
 *     sub_1406C0614 @ 0x1406C0614 (sub_1406C0614.c)
 *     sub_1406C087C @ 0x1406C087C (sub_1406C087C.c)
 *     sub_1406C0AE4 @ 0x1406C0AE4 (sub_1406C0AE4.c)
 *     sub_1406C0F88 @ 0x1406C0F88 (sub_1406C0F88.c)
 *     sub_1406C1494 @ 0x1406C1494 (sub_1406C1494.c)
 *     sub_1406C14F8 @ 0x1406C14F8 (sub_1406C14F8.c)
 *     sub_1406C1588 @ 0x1406C1588 (sub_1406C1588.c)
 *     sub_1406C1624 @ 0x1406C1624 (sub_1406C1624.c)
 *     sub_1406C16C0 @ 0x1406C16C0 (sub_1406C16C0.c)
 */

__int64 __fastcall sub_14051F200(unsigned int *a1, unsigned int a2, UINT a3, _QWORD *a4, UINT *a5)
{
  _QWORD *v5; // rdi
  int Acl; // esi
  SIZE_T v7; // r14
  char *v8; // r13
  unsigned int *v9; // r9
  SIZE_T v10; // r15
  unsigned int *v11; // rcx
  unsigned int v12; // r9d
  unsigned int *v13; // r10
  unsigned int v14; // r8d
  SIZE_T v15; // r12
  unsigned int v16; // ecx
  _QWORD *PoolWithTag; // rbx
  PVOID v18; // rax
  char *v19; // r14
  PVOID v20; // rax
  void *v21; // r14
  PVOID v22; // rax
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  unsigned int *v26; // r15
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  PVOID v30; // rcx
  int v31; // r13d
  ULONGLONG v32; // rdi
  ULONGLONG v33; // rax
  __int64 *v34; // rbx
  __int64 v35; // r12
  __int64 v36; // rbx
  SIZE_T v37; // r12
  PVOID v38; // rax
  unsigned __int8 *v39; // r15
  _BYTE *v40; // rdi
  int v41; // r11d
  int v42; // r14d
  UINT v43; // r10d
  UINT v44; // ebx
  int v45; // r8d
  char v46; // dl
  int v47; // eax
  ULONGLONG v48; // rcx
  char v49; // r13
  unsigned __int8 *v50; // r12
  unsigned __int8 *v51; // rbx
  unsigned __int8 v52; // al
  int v53; // eax
  int v54; // eax
  UINT v55; // r11d
  UINT v56; // r14d
  int v57; // eax
  int v58; // ecx
  int v59; // eax
  UINT v60; // r14d
  _BYTE *v61; // r13
  unsigned __int8 *v62; // r8
  ULONGLONG v63; // r12
  int v64; // edx
  int v65; // eax
  int v66; // r11d
  UINT v67; // edx
  int v68; // r8d
  unsigned int v69; // edi
  int v70; // r11d
  int v71; // edi
  int v72; // r11d
  int v73; // edi
  int v74; // r11d
  int v75; // edi
  char v76; // r15
  unsigned __int8 *v77; // r14
  __int64 v78; // r12
  int v79; // r11d
  int v80; // edi
  unsigned int v81; // r11d
  unsigned __int8 *v82; // rbx
  unsigned int v83; // edi
  int v84; // r11d
  unsigned __int8 v85; // al
  int v86; // eax
  int v87; // eax
  UINT v88; // esi
  bool v89; // zf
  SIZE_T v90; // rcx
  __m128i v91; // xmm1
  __m128i v92; // xmm2
  const __m128i *v93; // rax
  __m128i v94; // xmm0
  __m128i v95; // xmm0
  __m128i v96; // xmm1
  __m128i v97; // xmm1
  __m128i v98; // xmm1
  __m128i v99; // xmm1
  int v100; // eax
  _DWORD *v101; // r8
  SIZE_T v102; // r14
  char *v103; // rbx
  PVOID v104; // r12
  unsigned int v105; // edi
  unsigned __int64 v106; // rdx
  char *v107; // rcx
  unsigned int v108; // r9d
  char *v109; // r8
  int v110; // edx
  int *v111; // rax
  unsigned int *v112; // rax
  int v113; // edx
  __int64 v114; // r8
  unsigned int *v115; // rcx
  SIZE_T v116; // r12
  const void *v117; // r14
  unsigned int *v118; // rax
  unsigned int j; // edx
  __int64 v120; // r8
  unsigned int *v121; // rcx
  SIZE_T v122; // r15
  const void *v123; // rdi
  _QWORD *v124; // rbx
  __int64 v125; // r8
  PVOID v126; // r12
  PVOID v127; // rax
  PVOID v128; // rax
  void *v129; // rcx
  void *v130; // rcx
  void *v131; // rcx
  unsigned int v132; // edi
  NTSTATUS v133; // ebx
  ULONGLONG v134; // rcx
  unsigned int v135; // r10d
  int v136; // r9d
  int v137; // r9d
  _QWORD *v138; // rax
  ULONGLONG v139; // rcx
  unsigned int v140; // r10d
  int v141; // r9d
  unsigned int v142; // r9d
  const wchar_t *v143; // rcx
  unsigned int v144; // eax
  size_t v145; // r14
  WCHAR *v146; // rax
  const WCHAR *v147; // rsi
  ULONGLONG v148; // rcx
  unsigned int v149; // r10d
  int v150; // r9d
  int v151; // r9d
  _DWORD *v152; // rax
  ULONGLONG v153; // rcx
  unsigned int v154; // r10d
  int v155; // r9d
  int v156; // r9d
  UINT *v157; // rax
  UINT v158; // r12d
  int v159; // ebx
  int v160; // eax
  int v161; // ecx
  UINT v162; // eax
  int v163; // eax
  int v164; // eax
  unsigned int v165; // eax
  unsigned int v166; // edx
  unsigned int v167; // eax
  unsigned int v168; // edx
  unsigned int v169; // eax
  unsigned int v170; // edx
  unsigned int v171; // edx
  int v172; // r9d
  int v173; // r8d
  unsigned int v174; // eax
  unsigned int v175; // edx
  unsigned int v176; // eax
  __int64 v177; // rbx
  __int64 v178; // r15
  NTSTATUS v179; // eax
  int v180; // ebx
  int v181; // eax
  __int64 v182; // rbx
  NTSTATUS v183; // eax
  int v184; // r15d
  unsigned int v185; // r8d
  unsigned int *v186; // rdx
  unsigned int v187; // eax
  PVOID v188; // rax
  unsigned int v189; // r10d
  int v190; // edx
  _DWORD *v191; // r9
  int *v192; // rcx
  _DWORD *v193; // r9
  unsigned int v194; // r14d
  int v195; // r11d
  _DWORD *v196; // r9
  _QWORD *v197; // rax
  NTSTATUS v198; // eax
  UINT v199; // edx
  NTSTATUS v200; // eax
  UINT *v201; // r11
  int v202; // r14d
  NTSTATUS v203; // eax
  UINT v204; // r9d
  ULONGLONG v205; // r11
  int v206; // edx
  _DWORD *v207; // r11
  _DWORD *v208; // rcx
  NTSTATUS v209; // eax
  UINT v210; // edx
  NTSTATUS v211; // eax
  NTSTATUS v212; // eax
  UINT v213; // edx
  NTSTATUS v214; // eax
  UINT *v215; // r11
  int v216; // r14d
  NTSTATUS v217; // eax
  UINT v218; // r9d
  ULONGLONG v219; // r11
  const void *v220; // r9
  UINT *v221; // r11
  UINT *v222; // r11
  int v223; // r14d
  NTSTATUS v224; // eax
  UINT v225; // r9d
  ULONGLONG v226; // r11
  int v227; // edx
  _DWORD *v228; // r11
  UINT *v229; // rcx
  NTSTATUS v230; // eax
  UINT v231; // edx
  UINT *v232; // r11
  int v233; // edi
  NTSTATUS v234; // eax
  UINT v235; // r9d
  ULONGLONG v236; // r11
  unsigned int v237; // r10d
  int v238; // edx
  _DWORD *v239; // r11
  _DWORD *v240; // rcx
  PSID *v241; // r15
  ULONG v242; // ebx
  ULONG v243; // ebx
  ULONG v244; // ebx
  ACL *v245; // rax
  ACL *v246; // r14
  NTSTATUS v247; // eax
  UINT v248; // edx
  NTSTATUS v249; // eax
  UINT v250; // edx
  BOOLEAN v251; // bl
  UINT v252; // ecx
  UINT v253; // edx
  NTSTATUS v254; // eax
  UINT v255; // ecx
  NTSTATUS v256; // eax
  UINT v257; // ecx
  UINT v258; // eax
  NTSTATUS v259; // eax
  UINT v260; // edx
  UINT *v261; // r10
  NTSTATUS v262; // eax
  UINT v263; // r9d
  ULONGLONG v264; // r10
  int v265; // r11d
  int v266; // edx
  _DWORD *v267; // r10
  _DWORD *v268; // rcx
  PVOID v269; // rax
  int v270; // edx
  _DWORD *v271; // r9
  _DWORD *v272; // rcx
  unsigned int v273; // r11d
  ULONGLONG v274; // rcx
  unsigned int v275; // r10d
  int v276; // r9d
  int v277; // r9d
  _QWORD *v278; // rax
  NTSTATUS v279; // eax
  UINT v280; // edx
  UINT *v281; // r10
  NTSTATUS v282; // eax
  UINT v283; // r9d
  ULONGLONG v284; // r10
  int v285; // r11d
  int v286; // edx
  _DWORD *v287; // r10
  int *v288; // rcx
  PVOID v289; // rax
  int v290; // edx
  _DWORD *v291; // r9
  int *v292; // rcx
  ULONGLONG v293; // rcx
  unsigned int v294; // r10d
  int v295; // r9d
  unsigned int v296; // r9d
  ULONGLONG v297; // rdx
  int v298; // eax
  int v299; // ebx
  NTSTATUS v300; // eax
  UINT v301; // edx
  PVOID v302; // rax
  int v303; // edx
  _DWORD *v304; // r9
  int *v305; // rcx
  NTSTATUS v306; // eax
  UINT v307; // edx
  UINT *v308; // r10
  NTSTATUS v309; // eax
  UINT v310; // r9d
  ULONGLONG v311; // r10
  int v312; // r11d
  int v313; // edx
  _DWORD *v314; // r10
  int *v315; // rcx
  PVOID v316; // rax
  int v317; // edx
  _DWORD *v318; // r9
  _DWORD *v319; // rcx
  int v320; // eax
  UINT v321; // ecx
  ULONGLONG v322; // rcx
  unsigned int v323; // r10d
  int v324; // r9d
  int v325; // r9d
  _QWORD *v326; // rax
  int v327; // ebx
  int v328; // eax
  NTSTATUS v329; // eax
  NTSTATUS v330; // ebx
  NTSTATUS v331; // eax
  NTSTATUS v332; // eax
  UINT v333; // r9d
  int v334; // ecx
  NTSTATUS v335; // eax
  UINT v336; // r9d
  NTSTATUS v337; // eax
  UINT v338; // r9d
  NTSTATUS v339; // eax
  UINT v340; // r9d
  UINT v341; // r9d
  UINT v342; // ecx
  UINT v343; // edx
  NTSTATUS v344; // eax
  UINT v345; // ecx
  UINT v346; // eax
  PVOID v347; // rax
  unsigned int v348; // r10d
  int v349; // edx
  _DWORD *v350; // r9
  int *v351; // rcx
  NTSTATUS v352; // eax
  UINT v353; // edx
  NTSTATUS v354; // eax
  UINT *v355; // r11
  int v356; // ebx
  NTSTATUS v357; // eax
  UINT v358; // r9d
  ULONGLONG v359; // r11
  _DWORD *v360; // r11
  _QWORD *v361; // rax
  NTSTATUS v362; // eax
  UINT v363; // edx
  UINT *v364; // r11
  int v365; // ebx
  NTSTATUS v366; // eax
  UINT v367; // r9d
  ULONGLONG v368; // r11
  unsigned int v369; // r10d
  int v370; // edx
  _DWORD *v371; // r11
  int *v372; // rcx
  ULONGLONG v373; // rcx
  unsigned int v374; // r10d
  int v375; // r9d
  int v376; // r9d
  _QWORD *v377; // rax
  NTSTATUS v378; // eax
  NTSTATUS v379; // ebx
  NTSTATUS v380; // eax
  NTSTATUS v381; // eax
  UINT v382; // ecx
  UINT v383; // r9d
  NTSTATUS v384; // eax
  UINT v385; // r9d
  UINT v386; // edx
  NTSTATUS v387; // eax
  UINT v388; // r9d
  UINT v389; // r9d
  UINT v390; // ecx
  UINT v391; // edx
  NTSTATUS v392; // eax
  UINT v393; // ecx
  UINT v394; // eax
  PVOID v395; // rax
  unsigned int v396; // edi
  int v397; // edx
  _DWORD *v398; // r9
  int *v399; // rcx
  NTSTATUS v400; // eax
  UINT v401; // edx
  UINT *v402; // r10
  NTSTATUS v403; // eax
  UINT v404; // r9d
  ULONGLONG v405; // r10
  int v406; // r11d
  _DWORD *v407; // r10
  _QWORD *v408; // rax
  ULONGLONG v409; // rcx
  unsigned int v410; // r10d
  int v411; // r9d
  int v412; // r9d
  _QWORD *v413; // rax
  NTSTATUS v414; // eax
  __int64 v415; // rbx
  ULONG TimeIncrement; // eax
  NTSTATUS v417; // eax
  UINT v418; // ecx
  UINT v419; // r9d
  NTSTATUS v420; // eax
  UINT v421; // r9d
  UINT v422; // edx
  NTSTATUS v423; // eax
  UINT v424; // r9d
  UINT v425; // r9d
  UINT v426; // ecx
  UINT v427; // edx
  NTSTATUS v428; // eax
  UINT v429; // ecx
  UINT v430; // eax
  PVOID v431; // rax
  unsigned int v432; // ebx
  int v433; // edx
  _DWORD *v434; // r9
  int *v435; // rcx
  NTSTATUS v436; // eax
  UINT v437; // edx
  UINT *v438; // r10
  NTSTATUS v439; // eax
  UINT v440; // r9d
  ULONGLONG v441; // r10
  int v442; // r11d
  _DWORD *v443; // r10
  _QWORD *v444; // rax
  PSID *v445; // r15
  ULONG v446; // ebx
  ULONG v447; // ebx
  ULONG v448; // ebx
  ACL *v449; // rax
  __int64 v450; // rdx
  __int64 v451; // r8
  ACL *v452; // r14
  BOOLEAN v453; // bl
  int UpdateFileEaAllowedExt_0; // eax
  PSID *v455; // r15
  ULONG v456; // ebx
  ULONG v457; // ebx
  ULONG v458; // ebx
  ACL *v459; // rax
  __int64 v460; // rdx
  __int64 v461; // r8
  ACL *v462; // r14
  BOOLEAN v463; // bl
  int v464; // eax
  PSID *v465; // r15
  ULONG v466; // ebx
  ULONG v467; // ebx
  ULONG v468; // ebx
  ACL *v469; // rax
  ACL *v470; // r14
  unsigned int v471; // r11d
  BOOLEAN v472; // bl
  int v473; // eax
  ULONGLONG v474; // rcx
  unsigned int v475; // r10d
  int v476; // r9d
  int v477; // r9d
  void **v478; // rax
  ULONGLONG v479; // rcx
  unsigned int v480; // r10d
  int v481; // r9d
  int v482; // r9d
  NTSTATUS *v483; // rax
  ULONGLONG v484; // rcx
  unsigned int v485; // r10d
  int v486; // r9d
  int v487; // r9d
  NTSTATUS *v488; // rax
  ULONGLONG v489; // rcx
  unsigned int v490; // r10d
  int v491; // r9d
  int v492; // r9d
  _QWORD *v493; // rbx
  void *v494; // r12
  NTSTATUS v495; // eax
  struct _FILE_OBJECT *v496; // r15
  size_t *v497; // r14
  __m128i v498; // xmm6
  SE_SIGNING_LEVEL v499; // cl
  __int64 *v500; // rbx
  char *v501; // rax
  NTSTATUS v502; // eax
  UINT v503; // edx
  UINT *v504; // r10
  NTSTATUS v505; // eax
  UINT v506; // r9d
  ULONGLONG v507; // r10
  int v508; // r11d
  int v509; // edx
  _DWORD *v510; // r10
  _DWORD *v511; // rcx
  PVOID v512; // rax
  int v513; // edx
  _DWORD *v514; // r9
  _DWORD *v515; // rcx
  unsigned int v516; // r11d
  ULONGLONG v517; // rcx
  unsigned int v518; // r10d
  int v519; // r9d
  int v520; // r9d
  _QWORD *v521; // rax
  ULONGLONG v522; // rcx
  unsigned int v523; // r10d
  int v524; // r9d
  int v525; // r9d
  void **v526; // rax
  ULONGLONG v527; // rcx
  unsigned int v528; // r10d
  int v529; // r9d
  int v530; // r9d
  UINT *v531; // rax
  NTSTATUS v532; // eax
  struct _FILE_OBJECT *v533; // rdi
  __int64 *v534; // rbx
  __int64 v535; // rax
  NTSTATUS v536; // eax
  UINT v537; // r9d
  NTSTATUS v538; // eax
  UINT v539; // r9d
  PVOID v540; // rax
  unsigned int v541; // ebx
  _DWORD *v542; // r9
  _QWORD *v543; // rax
  UINT v544; // edi
  NTSTATUS v545; // eax
  UINT v546; // edx
  UINT *v547; // r10
  NTSTATUS v548; // eax
  UINT v549; // r9d
  ULONGLONG v550; // r10
  int v551; // r11d
  UINT *v552; // r10
  void *v553; // rcx
  unsigned int v554; // r11d
  int v555; // edi
  ULONGLONG v556; // rcx
  unsigned int v557; // r10d
  int v558; // r9d
  int v559; // r9d
  _QWORD *v560; // rax
  ULONGLONG v561; // rcx
  unsigned int v562; // r10d
  int v563; // r9d
  int v564; // r9d
  void **v565; // rax
  char *v566; // r14
  unsigned __int16 *v567; // rbx
  NTSTATUS v568; // eax
  struct _FILE_OBJECT *v569; // r15
  char *v570; // rax
  unsigned __int16 *v571; // rax
  int v572; // eax
  __int64 v573; // r8
  __int64 v574; // rdx
  __int64 *v575; // r12
  int v576; // r15d
  NTSTATUS v577; // eax
  UINT v578; // r9d
  NTSTATUS v579; // eax
  UINT v580; // r9d
  PVOID v581; // rax
  unsigned int v582; // ebx
  _DWORD *v583; // r9
  _QWORD *v584; // rax
  NTSTATUS v585; // eax
  UINT v586; // edx
  UINT *v587; // r10
  NTSTATUS v588; // eax
  UINT v589; // r9d
  ULONGLONG v590; // r10
  int v591; // r11d
  int v592; // edx
  _DWORD *v593; // r10
  int *v594; // rcx
  NTSTATUS v595; // eax
  UINT v596; // r9d
  int v597; // ecx
  NTSTATUS v598; // eax
  UINT v599; // r9d
  UINT v600; // eax
  PVOID v601; // rax
  unsigned int v602; // ebx
  int v603; // edx
  _DWORD *v604; // r9
  _DWORD *v605; // rcx
  NTSTATUS v606; // eax
  UINT v607; // edx
  UINT *v608; // r10
  NTSTATUS v609; // eax
  UINT v610; // r9d
  ULONGLONG v611; // r10
  int v612; // r11d
  _DWORD *v613; // r10
  unsigned __int64 *v614; // rax
  NTSTATUS v615; // eax
  UINT v616; // r9d
  int v617; // ecx
  NTSTATUS v618; // eax
  UINT v619; // r9d
  NTSTATUS v620; // eax
  UINT v621; // r9d
  UINT v622; // r9d
  UINT v623; // ecx
  UINT v624; // edx
  NTSTATUS v625; // eax
  UINT v626; // ecx
  NTSTATUS v627; // eax
  UINT v628; // ecx
  UINT v629; // eax
  PVOID v630; // rax
  unsigned int v631; // ebx
  int v632; // edx
  _DWORD *v633; // r9
  _DWORD *v634; // rcx
  NTSTATUS v635; // eax
  UINT v636; // edx
  UINT *v637; // r10
  NTSTATUS v638; // eax
  UINT v639; // r9d
  ULONGLONG v640; // r10
  int v641; // r11d
  _DWORD *v642; // r10
  unsigned __int64 *v643; // rax
  unsigned int v644; // r8d
  ULONGLONG v645; // rcx
  unsigned int v646; // r10d
  int v647; // r9d
  int v648; // r9d
  _QWORD *v649; // rax
  ULONGLONG v650; // rcx
  unsigned int v651; // r10d
  int v652; // r9d
  int v653; // r9d
  _DWORD *v654; // rax
  ULONGLONG v655; // rcx
  unsigned int v656; // r10d
  int v657; // r9d
  unsigned int v658; // r9d
  const wchar_t *v659; // rcx
  unsigned int v660; // eax
  size_t v661; // rdi
  PVOID v662; // rax
  void *v663; // rbx
  ULONGLONG v664; // rcx
  unsigned int v665; // r10d
  int v666; // r9d
  unsigned int v667; // r9d
  const wchar_t *v668; // rcx
  unsigned int v669; // eax
  size_t v670; // rdi
  PVOID v671; // rax
  void *v672; // rbx
  ULONGLONG v673; // rcx
  unsigned int v674; // r10d
  int v675; // r9d
  int v676; // r11d
  ULONGLONG v677; // rax
  ULONGLONG v678; // rcx
  unsigned int v679; // r10d
  int v680; // r9d
  int v681; // r9d
  _DWORD *v682; // rax
  int v683; // ebx
  NTSTATUS v684; // eax
  UINT v685; // ecx
  UINT v686; // r9d
  NTSTATUS v687; // eax
  UINT v688; // r9d
  UINT v689; // edx
  NTSTATUS v690; // eax
  UINT v691; // r9d
  NTSTATUS v692; // eax
  UINT v693; // r9d
  UINT v694; // edx
  SIZE_T v695; // r9
  UINT v696; // ecx
  UINT v697; // edx
  NTSTATUS v698; // eax
  UINT v699; // ecx
  UINT v700; // eax
  PVOID v701; // rax
  unsigned int v702; // r10d
  int v703; // edx
  _DWORD *v704; // r9
  int *v705; // rcx
  NTSTATUS v706; // eax
  UINT v707; // edx
  NTSTATUS v708; // eax
  UINT *v709; // r11
  int v710; // ebx
  NTSTATUS v711; // eax
  UINT v712; // r9d
  ULONGLONG v713; // r11
  _DWORD *v714; // r11
  _QWORD *v715; // rax
  NTSTATUS v716; // eax
  UINT v717; // edx
  UINT *v718; // r11
  int v719; // ebx
  NTSTATUS v720; // eax
  UINT v721; // r9d
  ULONGLONG v722; // r11
  unsigned int v723; // r10d
  _DWORD *v724; // r11
  _OWORD *v725; // rax
  ULONGLONG v726; // rcx
  unsigned int v727; // r10d
  int v728; // r9d
  int v729; // r9d
  _QWORD *v730; // rax
  ULONGLONG v731; // rcx
  unsigned int v732; // r10d
  int v733; // r9d
  unsigned int v734; // r9d
  const wchar_t *v735; // rcx
  unsigned int v736; // eax
  size_t v737; // rdi
  PVOID v738; // rax
  void *v739; // rbx
  ULONGLONG v740; // rcx
  unsigned int v741; // r10d
  int v742; // r9d
  unsigned int v743; // r10d
  ULONGLONG v744; // rax
  int v745; // ebx
  NTSTATUS v746; // eax
  UINT v747; // ecx
  UINT v748; // r9d
  NTSTATUS v749; // eax
  UINT v750; // r9d
  UINT v751; // edx
  NTSTATUS v752; // eax
  UINT v753; // r9d
  NTSTATUS v754; // eax
  UINT v755; // r9d
  UINT v756; // edx
  SIZE_T v757; // r9
  UINT v758; // ecx
  UINT v759; // edx
  NTSTATUS v760; // eax
  UINT v761; // ecx
  UINT v762; // eax
  PVOID v763; // rax
  unsigned int v764; // r10d
  int v765; // edx
  _DWORD *v766; // r9
  int *v767; // rcx
  NTSTATUS v768; // eax
  UINT v769; // edx
  NTSTATUS v770; // eax
  UINT *v771; // r11
  int v772; // ebx
  NTSTATUS v773; // eax
  UINT v774; // r9d
  ULONGLONG v775; // r11
  _DWORD *v776; // r11
  _QWORD *v777; // rax
  NTSTATUS v778; // eax
  UINT v779; // edx
  UINT *v780; // r11
  int v781; // ebx
  NTSTATUS v782; // eax
  UINT v783; // r9d
  ULONGLONG v784; // r11
  unsigned int v785; // r10d
  _DWORD *v786; // r11
  _OWORD *v787; // rax
  NTSTATUS v788; // eax
  UINT v789; // edx
  UINT *v790; // r10
  NTSTATUS v791; // eax
  UINT v792; // r9d
  ULONGLONG v793; // r10
  int v794; // r11d
  int v795; // edx
  _DWORD *v796; // r10
  int *v797; // rcx
  PVOID v798; // rax
  int v799; // edx
  _DWORD *v800; // r9
  int *v801; // rcx
  char *v802; // rax
  char *v803; // rbx
  ULONGLONG v804; // rdx
  ULONGLONG v805; // rcx
  UINT v806; // edx
  unsigned __int8 *v807; // r14
  __int64 *v808; // rbx
  int v809; // eax
  ULONGLONG v810; // r15
  int v811; // ecx
  char v812; // r12
  __int64 v813; // rbx
  unsigned __int64 v814; // rcx
  __m128i v815; // xmm1
  __m128i v816; // xmm2
  unsigned __int8 *v817; // rax
  __m128i v818; // xmm0
  __m128i v819; // xmm0
  __m128i v820; // xmm1
  __m128i v821; // xmm1
  __m128i v822; // xmm1
  __m128i v823; // xmm1
  PVOID v824; // rax
  int v825; // r12d
  _BYTE *v826; // rsi
  unsigned int v827; // edi
  UINT v828; // r8d
  ULONG v829; // r9d
  int v830; // edx
  char v831; // r10
  int v832; // eax
  ULONGLONG v833; // rcx
  unsigned __int8 *v834; // r15
  unsigned __int8 *v835; // rbx
  char v836; // si
  unsigned __int8 v837; // al
  int v838; // eax
  int v839; // eax
  UINT v840; // r13d
  int v841; // eax
  int v842; // r12d
  int v843; // eax
  size_t v844; // rdx
  size_t v845; // r8
  unsigned __int8 *v846; // rcx
  _BYTE *v847; // rsi
  char v848; // r14
  unsigned __int8 *v849; // rbx
  int v850; // r12d
  int v851; // edi
  UINT v852; // r12d
  int v853; // r13d
  ULONGLONG v854; // rcx
  unsigned __int8 v855; // al
  int v856; // eax
  int v857; // eax
  unsigned int v858; // edi
  int v859; // r13d
  int v860; // edi
  int v861; // r13d
  int v862; // edi
  int v863; // r13d
  int v864; // edi
  unsigned int v865; // r13d
  int v866; // edi
  int v867; // r13d
  UINT v868; // r15d
  int v869; // edi
  _BYTE *v870; // rdx
  void *v871; // r15
  __int64 v872; // r14
  PVOID v873; // rax
  PVOID v874; // rbx
  _DWORD *v875; // rax
  const void **v876; // r12
  UINT v877; // ecx
  UINT v878; // eax
  _DWORD *v879; // rax
  void *v880; // rdi
  ULONGLONG v881; // rcx
  ULONGLONG v882; // rcx
  UINT v883; // ecx
  PVOID v884; // rax
  _QWORD *v885; // rbx
  void *v886; // rcx
  void *v887; // rcx
  void *v888; // rcx
  _QWORD *v889; // rbx
  void *v890; // rcx
  void *v891; // rcx
  void *v892; // rcx
  unsigned int v894; // [rsp+58h] [rbp-B0h] BYREF
  UINT uAugend[3]; // [rsp+5Ch] [rbp-ACh] BYREF
  PVOID v896; // [rsp+68h] [rbp-A0h]
  _QWORD v897[2]; // [rsp+70h] [rbp-98h] BYREF
  UINT v898; // [rsp+80h] [rbp-88h]
  int v899; // [rsp+84h] [rbp-84h]
  UINT v900; // [rsp+88h] [rbp-80h]
  ULONG v901; // [rsp+8Ch] [rbp-7Ch]
  UINT v902; // [rsp+90h] [rbp-78h] BYREF
  UINT v903; // [rsp+94h] [rbp-74h] BYREF
  ULONG v904; // [rsp+98h] [rbp-70h] BYREF
  UINT v905; // [rsp+9Ch] [rbp-6Ch] BYREF
  UINT v906; // [rsp+A0h] [rbp-68h] BYREF
  UINT v907; // [rsp+A4h] [rbp-64h] BYREF
  UINT v908; // [rsp+A8h] [rbp-60h] BYREF
  UINT v909; // [rsp+ACh] [rbp-5Ch] BYREF
  UINT v910; // [rsp+B0h] [rbp-58h] BYREF
  UINT v911; // [rsp+B4h] [rbp-54h] BYREF
  ULONGLONG v912; // [rsp+B8h] [rbp-50h] BYREF
  UINT v913; // [rsp+C0h] [rbp-48h]
  UINT v914; // [rsp+C4h] [rbp-44h]
  UINT v915; // [rsp+C8h] [rbp-40h] BYREF
  UINT v916; // [rsp+CCh] [rbp-3Ch]
  UINT v917; // [rsp+D0h] [rbp-38h] BYREF
  ULONGLONG v918; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v919; // [rsp+E0h] [rbp-28h] BYREF
  ULONGLONG v920; // [rsp+E8h] [rbp-20h] BYREF
  UINT v921; // [rsp+F0h] [rbp-18h] BYREF
  void *Src; // [rsp+F8h] [rbp-10h] BYREF
  UINT v923; // [rsp+100h] [rbp-8h] BYREF
  UINT v924; // [rsp+104h] [rbp-4h] BYREF
  UINT v925; // [rsp+108h] [rbp+0h] BYREF
  ULONGLONG v926; // [rsp+110h] [rbp+8h] BYREF
  UINT v927; // [rsp+118h] [rbp+10h] BYREF
  PVOID v928; // [rsp+120h] [rbp+18h] BYREF
  PVOID P; // [rsp+128h] [rbp+20h]
  UINT v930; // [rsp+130h] [rbp+28h] BYREF
  UINT v931; // [rsp+134h] [rbp+2Ch] BYREF
  UINT v932; // [rsp+138h] [rbp+30h] BYREF
  UINT v933; // [rsp+13Ch] [rbp+34h] BYREF
  UINT v934; // [rsp+140h] [rbp+38h] BYREF
  PVOID v935; // [rsp+148h] [rbp+40h]
  UINT v936; // [rsp+150h] [rbp+48h] BYREF
  UINT v937; // [rsp+154h] [rbp+4Ch] BYREF
  UINT v938; // [rsp+158h] [rbp+50h]
  int v939; // [rsp+15Ch] [rbp+54h]
  UINT v940; // [rsp+160h] [rbp+58h] BYREF
  __m128i v941; // [rsp+168h] [rbp+60h]
  PVOID v942; // [rsp+178h] [rbp+70h]
  int v943; // [rsp+180h] [rbp+78h]
  int v944; // [rsp+184h] [rbp+7Ch]
  int v945; // [rsp+188h] [rbp+80h] BYREF
  int v946; // [rsp+18Ch] [rbp+84h] BYREF
  UINT v947; // [rsp+190h] [rbp+88h]
  UINT v948; // [rsp+194h] [rbp+8Ch]
  UINT v949; // [rsp+198h] [rbp+90h]
  UINT v950; // [rsp+19Ch] [rbp+94h]
  UINT v951; // [rsp+1A0h] [rbp+98h]
  UINT v952; // [rsp+1A4h] [rbp+9Ch]
  UINT v953; // [rsp+1A8h] [rbp+A0h]
  UINT v954; // [rsp+1ACh] [rbp+A4h]
  UINT v955; // [rsp+1B0h] [rbp+A8h]
  UINT v956; // [rsp+1B4h] [rbp+ACh]
  UINT v957; // [rsp+1B8h] [rbp+B0h]
  UINT v958; // [rsp+1BCh] [rbp+B4h]
  UINT v959; // [rsp+1C0h] [rbp+B8h]
  ULONG v960; // [rsp+1C4h] [rbp+BCh] BYREF
  ULONG v961; // [rsp+1C8h] [rbp+C0h] BYREF
  UINT v962; // [rsp+1CCh] [rbp+C4h]
  UINT v963; // [rsp+1D0h] [rbp+C8h]
  int v964; // [rsp+1D4h] [rbp+CCh]
  UINT v965; // [rsp+1D8h] [rbp+D0h]
  UINT v966; // [rsp+1DCh] [rbp+D4h]
  UINT v967; // [rsp+1E0h] [rbp+D8h]
  UINT v968; // [rsp+1E4h] [rbp+DCh]
  UINT v969; // [rsp+1E8h] [rbp+E0h]
  UINT v970; // [rsp+1ECh] [rbp+E4h]
  UINT v971; // [rsp+1F0h] [rbp+E8h]
  UINT v972; // [rsp+1F4h] [rbp+ECh]
  UINT v973; // [rsp+1F8h] [rbp+F0h]
  ULONGLONG v974; // [rsp+200h] [rbp+F8h] BYREF
  ULONGLONG v975; // [rsp+208h] [rbp+100h] BYREF
  ULONGLONG v976; // [rsp+210h] [rbp+108h] BYREF
  ULONGLONG v977; // [rsp+218h] [rbp+110h] BYREF
  ULONGLONG v978; // [rsp+220h] [rbp+118h] BYREF
  ULONGLONG v979; // [rsp+228h] [rbp+120h] BYREF
  ULONGLONG v980; // [rsp+230h] [rbp+128h] BYREF
  PVOID v981; // [rsp+238h] [rbp+130h]
  ULONGLONG v982; // [rsp+240h] [rbp+138h] BYREF
  NTSTATUS v983; // [rsp+248h] [rbp+140h] BYREF
  NTSTATUS v984; // [rsp+24Ch] [rbp+144h] BYREF
  UINT v985; // [rsp+250h] [rbp+148h] BYREF
  UINT v986; // [rsp+254h] [rbp+14Ch]
  UINT v987; // [rsp+258h] [rbp+150h]
  UINT v988; // [rsp+25Ch] [rbp+154h] BYREF
  ULONGLONG pullResult; // [rsp+260h] [rbp+158h] BYREF
  ULONGLONG v990; // [rsp+268h] [rbp+160h] BYREF
  ULONGLONG v991; // [rsp+270h] [rbp+168h] BYREF
  ULONGLONG v992; // [rsp+278h] [rbp+170h] BYREF
  ULONGLONG v993; // [rsp+280h] [rbp+178h] BYREF
  ULONGLONG v994; // [rsp+288h] [rbp+180h] BYREF
  ULONGLONG v995; // [rsp+290h] [rbp+188h] BYREF
  ULONGLONG v996; // [rsp+298h] [rbp+190h] BYREF
  ULONGLONG v997; // [rsp+2A0h] [rbp+198h] BYREF
  ULONGLONG v998; // [rsp+2A8h] [rbp+1A0h] BYREF
  ULONGLONG v999; // [rsp+2B0h] [rbp+1A8h] BYREF
  ULONGLONG v1000; // [rsp+2B8h] [rbp+1B0h] BYREF
  ULONGLONG v1001; // [rsp+2C0h] [rbp+1B8h] BYREF
  ULONGLONG v1002; // [rsp+2C8h] [rbp+1C0h] BYREF
  ULONGLONG v1003; // [rsp+2D0h] [rbp+1C8h] BYREF
  ULONGLONG v1004; // [rsp+2D8h] [rbp+1D0h] BYREF
  ULONGLONG v1005; // [rsp+2E0h] [rbp+1D8h] BYREF
  ULONGLONG v1006; // [rsp+2E8h] [rbp+1E0h] BYREF
  ULONGLONG v1007; // [rsp+2F0h] [rbp+1E8h] BYREF
  unsigned int v1008; // [rsp+2F8h] [rbp+1F0h]
  UINT NumberOfBytes; // [rsp+2FCh] [rbp+1F4h]
  int NumberOfBytes_4; // [rsp+300h] [rbp+1F8h]
  int v1011; // [rsp+304h] [rbp+1FCh] BYREF
  int v1012; // [rsp+308h] [rbp+200h] BYREF
  int v1013; // [rsp+30Ch] [rbp+204h] BYREF
  SIZE_T v1014; // [rsp+310h] [rbp+208h]
  int v1015; // [rsp+318h] [rbp+210h] BYREF
  int v1016; // [rsp+320h] [rbp+218h]
  int v1017; // [rsp+328h] [rbp+220h] BYREF
  UINT v1018; // [rsp+330h] [rbp+228h] BYREF
  unsigned int v1019; // [rsp+338h] [rbp+230h] BYREF
  UINT v1020; // [rsp+340h] [rbp+238h] BYREF
  UINT v1021; // [rsp+344h] [rbp+23Ch] BYREF
  UINT v1022; // [rsp+348h] [rbp+240h] BYREF
  UINT v1023; // [rsp+34Ch] [rbp+244h]
  int v1024; // [rsp+350h] [rbp+248h] BYREF
  int v1025; // [rsp+358h] [rbp+250h] BYREF
  int v1026; // [rsp+360h] [rbp+258h] BYREF
  int v1027; // [rsp+368h] [rbp+260h]
  int v1028; // [rsp+36Ch] [rbp+264h]
  int v1029; // [rsp+370h] [rbp+268h] BYREF
  int v1030; // [rsp+378h] [rbp+270h] BYREF
  UINT v1031; // [rsp+380h] [rbp+278h]
  int v1032; // [rsp+388h] [rbp+280h] BYREF
  UINT v1033; // [rsp+390h] [rbp+288h]
  int v1034; // [rsp+398h] [rbp+290h] BYREF
  UINT v1035; // [rsp+3A0h] [rbp+298h]
  UINT v1036; // [rsp+3A4h] [rbp+29Ch] BYREF
  UINT v1037; // [rsp+3A8h] [rbp+2A0h] BYREF
  UINT v1038; // [rsp+3ACh] [rbp+2A4h]
  int v1039; // [rsp+3B0h] [rbp+2A8h] BYREF
  unsigned int v1040; // [rsp+3B8h] [rbp+2B0h]
  int v1041; // [rsp+3BCh] [rbp+2B4h]
  unsigned int v1042; // [rsp+3C0h] [rbp+2B8h]
  int v1043; // [rsp+3C4h] [rbp+2BCh]
  UINT v1044; // [rsp+3C8h] [rbp+2C0h]
  unsigned int v1045; // [rsp+3CCh] [rbp+2C4h]
  UINT v1046; // [rsp+3D0h] [rbp+2C8h] BYREF
  UINT v1047; // [rsp+3D4h] [rbp+2CCh] BYREF
  int v1048; // [rsp+3D8h] [rbp+2D0h] BYREF
  UINT v1049; // [rsp+3E0h] [rbp+2D8h] BYREF
  UINT v1050; // [rsp+3E4h] [rbp+2DCh]
  int v1051; // [rsp+3E8h] [rbp+2E0h] BYREF
  UINT v1052; // [rsp+3F0h] [rbp+2E8h] BYREF
  unsigned int v1053; // [rsp+3F4h] [rbp+2ECh]
  UINT v1054; // [rsp+3F8h] [rbp+2F0h] BYREF
  int v1055; // [rsp+400h] [rbp+2F8h] BYREF
  unsigned int v1056; // [rsp+408h] [rbp+300h]
  UINT v1057; // [rsp+40Ch] [rbp+304h] BYREF
  UINT v1058; // [rsp+410h] [rbp+308h] BYREF
  UINT v1059; // [rsp+414h] [rbp+30Ch]
  int v1060; // [rsp+418h] [rbp+310h] BYREF
  int v1061; // [rsp+420h] [rbp+318h] BYREF
  int v1062; // [rsp+428h] [rbp+320h] BYREF
  UINT v1063; // [rsp+430h] [rbp+328h] BYREF
  UINT v1064[2]; // [rsp+434h] [rbp+32Ch] BYREF
  UINT v1065; // [rsp+43Ch] [rbp+334h]
  int v1066; // [rsp+440h] [rbp+338h]
  int v1067; // [rsp+448h] [rbp+340h] BYREF
  int v1068; // [rsp+450h] [rbp+348h] BYREF
  UINT v1069; // [rsp+458h] [rbp+350h] BYREF
  UINT v1070; // [rsp+45Ch] [rbp+354h]
  UINT v1071; // [rsp+460h] [rbp+358h] BYREF
  ULONGLONG v1072; // [rsp+468h] [rbp+360h] BYREF
  ULONGLONG i; // [rsp+470h] [rbp+368h] BYREF
  int v1074; // [rsp+478h] [rbp+370h] BYREF
  int v1075; // [rsp+480h] [rbp+378h] BYREF
  int v1076; // [rsp+488h] [rbp+380h] BYREF
  void *v1077; // [rsp+490h] [rbp+388h]
  size_t v1078; // [rsp+498h] [rbp+390h] BYREF
  int v1079; // [rsp+4A0h] [rbp+398h] BYREF
  int v1080; // [rsp+4A8h] [rbp+3A0h] BYREF
  PVOID v1081; // [rsp+4B0h] [rbp+3A8h]
  PCWSTR SourceString; // [rsp+4B8h] [rbp+3B0h]
  PVOID v1083; // [rsp+4C0h] [rbp+3B8h]
  HANDLE TargetFile; // [rsp+4C8h] [rbp+3C0h] BYREF
  PVOID v1085; // [rsp+4D0h] [rbp+3C8h]
  PVOID v1086; // [rsp+4D8h] [rbp+3D0h]
  PVOID v1087; // [rsp+4E0h] [rbp+3D8h]
  size_t v1088[2]; // [rsp+4E8h] [rbp+3E0h] BYREF
  ULONG v1089; // [rsp+4F8h] [rbp+3F0h] BYREF
  ULONG v1090; // [rsp+4FCh] [rbp+3F4h] BYREF
  ULONG v1091; // [rsp+500h] [rbp+3F8h] BYREF
  int v1092; // [rsp+504h] [rbp+3FCh]
  int v1093; // [rsp+508h] [rbp+400h]
  int v1094; // [rsp+50Ch] [rbp+404h]
  int v1095; // [rsp+510h] [rbp+408h]
  NTSTATUS v1096; // [rsp+514h] [rbp+40Ch]
  NTSTATUS v1097; // [rsp+518h] [rbp+410h]
  UINT v1098; // [rsp+51Ch] [rbp+414h] BYREF
  UINT v1099; // [rsp+520h] [rbp+418h] BYREF
  int v1100; // [rsp+524h] [rbp+41Ch]
  int v1101; // [rsp+528h] [rbp+420h]
  int v1102; // [rsp+52Ch] [rbp+424h]
  UINT v1103; // [rsp+530h] [rbp+428h] BYREF
  UINT v1104; // [rsp+534h] [rbp+42Ch] BYREF
  UINT v1105; // [rsp+538h] [rbp+430h] BYREF
  UINT v1106; // [rsp+53Ch] [rbp+434h] BYREF
  int v1107; // [rsp+540h] [rbp+438h]
  int v1108; // [rsp+544h] [rbp+43Ch]
  unsigned int v1109; // [rsp+548h] [rbp+440h] BYREF
  UINT v1110; // [rsp+54Ch] [rbp+444h] BYREF
  UINT v1111; // [rsp+550h] [rbp+448h] BYREF
  UINT v1112; // [rsp+554h] [rbp+44Ch] BYREF
  UINT v1113; // [rsp+558h] [rbp+450h] BYREF
  UINT v1114; // [rsp+55Ch] [rbp+454h] BYREF
  UINT v1115; // [rsp+560h] [rbp+458h] BYREF
  UINT v1116; // [rsp+564h] [rbp+45Ch] BYREF
  UINT v1117; // [rsp+568h] [rbp+460h] BYREF
  UINT v1118; // [rsp+56Ch] [rbp+464h] BYREF
  UINT v1119; // [rsp+570h] [rbp+468h] BYREF
  ULONG v1120; // [rsp+574h] [rbp+46Ch] BYREF
  int v1121; // [rsp+578h] [rbp+470h]
  int v1122; // [rsp+57Ch] [rbp+474h]
  int v1123; // [rsp+580h] [rbp+478h]
  int v1124; // [rsp+584h] [rbp+47Ch]
  int v1125; // [rsp+588h] [rbp+480h]
  unsigned int v1126; // [rsp+58Ch] [rbp+484h]
  UINT v1127; // [rsp+590h] [rbp+488h] BYREF
  UINT v1128; // [rsp+594h] [rbp+48Ch] BYREF
  UINT v1129; // [rsp+598h] [rbp+490h] BYREF
  int v1130; // [rsp+59Ch] [rbp+494h]
  UINT v1131; // [rsp+5A0h] [rbp+498h] BYREF
  UINT v1132; // [rsp+5A4h] [rbp+49Ch] BYREF
  UINT v1133; // [rsp+5A8h] [rbp+4A0h] BYREF
  UINT v1134; // [rsp+5ACh] [rbp+4A4h] BYREF
  int v1135; // [rsp+5B0h] [rbp+4A8h]
  unsigned int v1136; // [rsp+5B4h] [rbp+4ACh]
  UINT v1137; // [rsp+5B8h] [rbp+4B0h] BYREF
  UINT v1138; // [rsp+5BCh] [rbp+4B4h] BYREF
  UINT v1139; // [rsp+5C0h] [rbp+4B8h] BYREF
  unsigned int v1140; // [rsp+5C4h] [rbp+4BCh]
  UINT v1141; // [rsp+5C8h] [rbp+4C0h]
  UINT v1142; // [rsp+5CCh] [rbp+4C4h] BYREF
  UINT v1143; // [rsp+5D0h] [rbp+4C8h] BYREF
  UINT v1144; // [rsp+5D4h] [rbp+4CCh] BYREF
  UINT v1145; // [rsp+5D8h] [rbp+4D0h] BYREF
  UINT v1146; // [rsp+5DCh] [rbp+4D4h] BYREF
  unsigned int v1147; // [rsp+5E0h] [rbp+4D8h]
  unsigned int v1148; // [rsp+5E4h] [rbp+4DCh]
  int v1149; // [rsp+5E8h] [rbp+4E0h]
  int v1150; // [rsp+5ECh] [rbp+4E4h]
  int v1151; // [rsp+5F0h] [rbp+4E8h]
  int v1152; // [rsp+5F4h] [rbp+4ECh]
  int v1153; // [rsp+5F8h] [rbp+4F0h]
  int v1154; // [rsp+5FCh] [rbp+4F4h] BYREF
  int v1155; // [rsp+600h] [rbp+4F8h] BYREF
  int v1156; // [rsp+604h] [rbp+4FCh] BYREF
  int v1157; // [rsp+608h] [rbp+500h]
  UINT puResult; // [rsp+60Ch] [rbp+504h] BYREF
  UINT v1159; // [rsp+610h] [rbp+508h] BYREF
  UINT v1160; // [rsp+614h] [rbp+50Ch] BYREF
  UINT v1161; // [rsp+618h] [rbp+510h] BYREF
  UINT uAddend; // [rsp+61Ch] [rbp+514h] BYREF
  UINT v1163; // [rsp+620h] [rbp+518h] BYREF
  UINT v1164; // [rsp+624h] [rbp+51Ch] BYREF
  UINT v1165; // [rsp+628h] [rbp+520h] BYREF
  int v1166; // [rsp+62Ch] [rbp+524h]
  NTSTATUS AccessStatus; // [rsp+630h] [rbp+528h] BYREF
  ULONG ReturnLength; // [rsp+634h] [rbp+52Ch] BYREF
  UINT v1169; // [rsp+638h] [rbp+530h] BYREF
  UINT v1170; // [rsp+63Ch] [rbp+534h] BYREF
  UINT v1171; // [rsp+640h] [rbp+538h] BYREF
  int v1172; // [rsp+644h] [rbp+53Ch]
  UINT v1173; // [rsp+648h] [rbp+540h] BYREF
  UINT v1174; // [rsp+64Ch] [rbp+544h] BYREF
  unsigned int v1175; // [rsp+650h] [rbp+548h]
  UINT v1176; // [rsp+654h] [rbp+54Ch]
  UINT v1177; // [rsp+658h] [rbp+550h] BYREF
  UINT v1178; // [rsp+660h] [rbp+558h] BYREF
  UINT v1179; // [rsp+664h] [rbp+55Ch] BYREF
  int v1180; // [rsp+668h] [rbp+560h]
  int v1181; // [rsp+66Ch] [rbp+564h] BYREF
  int v1182; // [rsp+670h] [rbp+568h] BYREF
  int v1183; // [rsp+674h] [rbp+56Ch]
  UINT v1184; // [rsp+678h] [rbp+570h] BYREF
  UINT v1185; // [rsp+67Ch] [rbp+574h] BYREF
  UINT v1186; // [rsp+680h] [rbp+578h]
  UINT v1187; // [rsp+684h] [rbp+57Ch] BYREF
  UINT v1188; // [rsp+688h] [rbp+580h] BYREF
  UINT v1189; // [rsp+68Ch] [rbp+584h] BYREF
  HANDLE KeyHandle; // [rsp+690h] [rbp+588h] BYREF
  ULONGLONG v1191; // [rsp+698h] [rbp+590h] BYREF
  ULONGLONG v1192; // [rsp+6A0h] [rbp+598h] BYREF
  ULONGLONG v1193; // [rsp+6A8h] [rbp+5A0h] BYREF
  ULONGLONG v1194; // [rsp+6B0h] [rbp+5A8h] BYREF
  ULONGLONG v1195; // [rsp+6B8h] [rbp+5B0h] BYREF
  ULONGLONG v1196; // [rsp+6C0h] [rbp+5B8h] BYREF
  ULONGLONG v1197; // [rsp+6C8h] [rbp+5C0h] BYREF
  ULONGLONG v1198; // [rsp+6D8h] [rbp+5D0h] BYREF
  ULONGLONG v1199; // [rsp+6E0h] [rbp+5D8h] BYREF
  ULONGLONG v1200; // [rsp+6E8h] [rbp+5E0h] BYREF
  LARGE_INTEGER Interval; // [rsp+6F0h] [rbp+5E8h] BYREF
  ULONGLONG v1202; // [rsp+6F8h] [rbp+5F0h] BYREF
  LARGE_INTEGER v1203; // [rsp+700h] [rbp+5F8h] BYREF
  ULONGLONG v1204; // [rsp+708h] [rbp+600h] BYREF
  ULONGLONG v1205; // [rsp+710h] [rbp+608h] BYREF
  ULONGLONG v1206; // [rsp+718h] [rbp+610h] BYREF
  ULONGLONG v1207; // [rsp+720h] [rbp+618h] BYREF
  ULONGLONG v1208; // [rsp+728h] [rbp+620h] BYREF
  ULONGLONG v1209; // [rsp+730h] [rbp+628h] BYREF
  UINT v1210; // [rsp+738h] [rbp+630h] BYREF
  UINT v1211; // [rsp+73Ch] [rbp+634h] BYREF
  UINT v1212; // [rsp+740h] [rbp+638h]
  UINT v1213; // [rsp+744h] [rbp+63Ch] BYREF
  UINT v1214; // [rsp+748h] [rbp+640h] BYREF
  PVOID v1215; // [rsp+750h] [rbp+648h]
  int v1216; // [rsp+758h] [rbp+650h]
  size_t v1217; // [rsp+760h] [rbp+658h] BYREF
  UINT v1218; // [rsp+768h] [rbp+660h] BYREF
  UINT v1219; // [rsp+76Ch] [rbp+664h]
  UINT v1220; // [rsp+770h] [rbp+668h] BYREF
  UINT v1221; // [rsp+774h] [rbp+66Ch] BYREF
  NTSTATUS v1222; // [rsp+778h] [rbp+670h] BYREF
  HANDLE Handle; // [rsp+780h] [rbp+678h]
  ULONGLONG v1224; // [rsp+788h] [rbp+680h]
  __int64 v1225; // [rsp+790h] [rbp+688h] BYREF
  STRSAFE_PCNZWCH v1226; // [rsp+798h] [rbp+690h]
  ULONGLONG v1227; // [rsp+7A0h] [rbp+698h]
  __int64 v1228; // [rsp+7A8h] [rbp+6A0h] BYREF
  SIZE_T v1229; // [rsp+7B0h] [rbp+6A8h]
  STRSAFE_PCNZWCH psz; // [rsp+7B8h] [rbp+6B0h]
  LARGE_INTEGER Timeout; // [rsp+7C0h] [rbp+6B8h] BYREF
  __int64 v1232; // [rsp+7C8h] [rbp+6C0h] BYREF
  __int64 SystemInformation; // [rsp+7D0h] [rbp+6C8h] BYREF
  __int64 v1234; // [rsp+7D8h] [rbp+6D0h] BYREF
  __int64 v1235; // [rsp+7E0h] [rbp+6D8h] BYREF
  __int64 v1236; // [rsp+7E8h] [rbp+6E0h] BYREF
  __int64 v1237; // [rsp+7F0h] [rbp+6E8h] BYREF
  __int64 v1238; // [rsp+7F8h] [rbp+6F0h] BYREF
  __int64 v1239; // [rsp+800h] [rbp+6F8h] BYREF
  unsigned __int64 v1240; // [rsp+808h] [rbp+700h]
  HANDLE v1241; // [rsp+810h] [rbp+708h]
  __int64 v1242; // [rsp+818h] [rbp+710h] BYREF
  HANDLE v1243; // [rsp+820h] [rbp+718h]
  __int64 v1244; // [rsp+828h] [rbp+720h] BYREF
  unsigned __int64 v1245; // [rsp+830h] [rbp+728h] BYREF
  unsigned __int64 v1246; // [rsp+838h] [rbp+730h]
  unsigned __int64 v1247; // [rsp+840h] [rbp+738h] BYREF
  __int64 v1248; // [rsp+848h] [rbp+740h] BYREF
  STRSAFE_PCNZWCH v1249; // [rsp+850h] [rbp+748h]
  STRSAFE_PCNZWCH v1250; // [rsp+858h] [rbp+750h]
  int v1251; // [rsp+860h] [rbp+758h]
  int v1252; // [rsp+864h] [rbp+75Ch]
  char v1253[4]; // [rsp+868h] [rbp+760h] BYREF
  int v1254; // [rsp+86Ch] [rbp+764h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+870h] [rbp+768h] BYREF
  const void *v1256; // [rsp+878h] [rbp+770h]
  const void *v1257; // [rsp+880h] [rbp+778h]
  _QWORD *v1258; // [rsp+888h] [rbp+780h]
  size_t pcbLength; // [rsp+890h] [rbp+788h] BYREF
  void *v1260; // [rsp+898h] [rbp+790h]
  _DWORD *v1261; // [rsp+8A0h] [rbp+798h]
  UINT *v1262; // [rsp+8A8h] [rbp+7A0h]
  __int64 v1263; // [rsp+8B0h] [rbp+7A8h]
  _QWORD *v1264; // [rsp+8B8h] [rbp+7B0h]
  __int64 v1265; // [rsp+8C0h] [rbp+7B8h]
  ULONGLONG v1266; // [rsp+8C8h] [rbp+7C0h]
  _QWORD *v1267; // [rsp+8D0h] [rbp+7C8h]
  __int64 v1268; // [rsp+8D8h] [rbp+7D0h]
  _QWORD *v1269; // [rsp+8E0h] [rbp+7D8h]
  __int64 v1270; // [rsp+8E8h] [rbp+7E0h]
  _QWORD *v1271; // [rsp+8F0h] [rbp+7E8h]
  __int64 v1272; // [rsp+8F8h] [rbp+7F0h]
  void **v1273; // [rsp+900h] [rbp+7F8h]
  void *v1274; // [rsp+908h] [rbp+800h]
  NTSTATUS *v1275; // [rsp+910h] [rbp+808h]
  NTSTATUS *v1276; // [rsp+918h] [rbp+810h]
  _QWORD *v1277; // [rsp+920h] [rbp+818h]
  PVOID Object; // [rsp+928h] [rbp+820h] BYREF
  _QWORD *v1279; // [rsp+930h] [rbp+828h]
  void **v1280; // [rsp+938h] [rbp+830h]
  void *v1281; // [rsp+940h] [rbp+838h]
  UINT *v1282; // [rsp+948h] [rbp+840h]
  PVOID v1283; // [rsp+950h] [rbp+848h] BYREF
  __int64 v1284; // [rsp+958h] [rbp+850h]
  _QWORD *v1285; // [rsp+960h] [rbp+858h]
  void **v1286; // [rsp+968h] [rbp+860h]
  char v1287[8]; // [rsp+970h] [rbp+868h] BYREF
  __int64 Source2; // [rsp+978h] [rbp+870h] BYREF
  __int64 v1289; // [rsp+980h] [rbp+878h]
  unsigned __int64 v1290; // [rsp+988h] [rbp+880h]
  _QWORD *v1291; // [rsp+990h] [rbp+888h]
  _DWORD *v1292; // [rsp+998h] [rbp+890h]
  ACCESS_MASK v1293; // [rsp+9A0h] [rbp+898h] BYREF
  void *v1294; // [rsp+9A8h] [rbp+8A0h]
  ACCESS_MASK v1295; // [rsp+9B0h] [rbp+8A8h] BYREF
  void *v1296; // [rsp+9B8h] [rbp+8B0h]
  _DWORD *v1297; // [rsp+9C0h] [rbp+8B8h]
  __int64 v1298; // [rsp+9C8h] [rbp+8C0h]
  _QWORD *v1299; // [rsp+9D0h] [rbp+8C8h]
  ACCESS_MASK v1300; // [rsp+9D8h] [rbp+8D0h] BYREF
  void *v1301; // [rsp+9E0h] [rbp+8D8h]
  __int64 v1302; // [rsp+9E8h] [rbp+8E0h]
  __int64 v1303; // [rsp+9F0h] [rbp+8E8h]
  _QWORD *v1304; // [rsp+9F8h] [rbp+8F0h]
  UINT *v1305; // [rsp+A00h] [rbp+8F8h]
  int v1306; // [rsp+A08h] [rbp+900h]
  __m128i v1307; // [rsp+A18h] [rbp+910h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A28h] [rbp+920h] BYREF
  ULONGLONG v1309[2]; // [rsp+A40h] [rbp+938h] BYREF
  ULONGLONG v1310[3]; // [rsp+A50h] [rbp+948h] BYREF
  ULONGLONG v1311[2]; // [rsp+A68h] [rbp+960h] BYREF
  ULONGLONG v1312[2]; // [rsp+A78h] [rbp+970h] BYREF
  ULONGLONG v1313; // [rsp+A88h] [rbp+980h] BYREF
  UNICODE_STRING v1314; // [rsp+A90h] [rbp+988h] BYREF
  ULONGLONG v1315[2]; // [rsp+AA8h] [rbp+9A0h] BYREF
  ULONGLONG v1316[2]; // [rsp+AB8h] [rbp+9B0h] BYREF
  ULONGLONG v1317[2]; // [rsp+AC8h] [rbp+9C0h] BYREF
  ULONGLONG v1318[2]; // [rsp+AD8h] [rbp+9D0h] BYREF
  ULONGLONG v1319[2]; // [rsp+AE8h] [rbp+9E0h] BYREF
  ULONGLONG v1320[2]; // [rsp+AF8h] [rbp+9F0h] BYREF
  ULONGLONG v1321[2]; // [rsp+B08h] [rbp+A00h] BYREF
  ULONGLONG v1322[2]; // [rsp+B18h] [rbp+A10h] BYREF
  ULONGLONG v1323[2]; // [rsp+B28h] [rbp+A20h] BYREF
  ULONGLONG v1324[2]; // [rsp+B38h] [rbp+A30h] BYREF
  ULONGLONG v1325[2]; // [rsp+B58h] [rbp+A50h] BYREF
  ULONGLONG v1326[2]; // [rsp+B68h] [rbp+A60h] BYREF
  ULONGLONG v1327; // [rsp+B78h] [rbp+A70h] BYREF
  UNICODE_STRING v1328; // [rsp+B80h] [rbp+A78h] BYREF
  ULONGLONG v1329[2]; // [rsp+B98h] [rbp+A90h] BYREF
  ULONGLONG v1330[2]; // [rsp+BA8h] [rbp+AA0h] BYREF
  ULONGLONG v1331[2]; // [rsp+BB8h] [rbp+AB0h] BYREF
  ULONGLONG v1332[2]; // [rsp+BC8h] [rbp+AC0h] BYREF
  ULONGLONG v1333[2]; // [rsp+BD8h] [rbp+AD0h] BYREF
  ULONGLONG v1334[2]; // [rsp+BE8h] [rbp+AE0h] BYREF
  ULONGLONG v1335[2]; // [rsp+BF8h] [rbp+AF0h] BYREF
  ULONGLONG v1336[2]; // [rsp+C08h] [rbp+B00h] BYREF
  ULONGLONG v1337[2]; // [rsp+C18h] [rbp+B10h] BYREF
  ULONGLONG v1338[2]; // [rsp+C28h] [rbp+B20h] BYREF
  ULONGLONG v1339[2]; // [rsp+C38h] [rbp+B30h] BYREF
  ULONGLONG v1340[2]; // [rsp+C48h] [rbp+B40h] BYREF
  ULONGLONG v1341[2]; // [rsp+C58h] [rbp+B50h] BYREF
  ULONGLONG v1342[2]; // [rsp+C68h] [rbp+B60h] BYREF
  ULONGLONG v1343[2]; // [rsp+C78h] [rbp+B70h] BYREF
  ULONGLONG v1344[2]; // [rsp+C88h] [rbp+B80h] BYREF
  ULONGLONG v1345[2]; // [rsp+C98h] [rbp+B90h] BYREF
  ULONGLONG v1346[2]; // [rsp+CA8h] [rbp+BA0h] BYREF
  ULONGLONG v1347[2]; // [rsp+CB8h] [rbp+BB0h] BYREF
  ULONGLONG v1348; // [rsp+CC8h] [rbp+BC0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+CD0h] [rbp+BC8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+CF0h] [rbp+BE8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v1351; // [rsp+D10h] [rbp+C08h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v1352; // [rsp+D30h] [rbp+C28h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D50h] [rbp+C48h] BYREF
  _BYTE v1354[40]; // [rsp+D78h] [rbp+C70h] BYREF
  _BYTE v1355[40]; // [rsp+DA0h] [rbp+C98h] BYREF
  _BYTE v1356[40]; // [rsp+DC8h] [rbp+CC0h] BYREF
  __int64 v1357; // [rsp+DF0h] [rbp+CE8h] BYREF
  __int64 v1358; // [rsp+DF8h] [rbp+CF0h] BYREF
  __int128 v1359; // [rsp+E00h] [rbp+CF8h] BYREF
  __int128 v1360; // [rsp+E10h] [rbp+D08h] BYREF
  int v1361; // [rsp+E20h] [rbp+D18h] BYREF
  __int64 v1362; // [rsp+E24h] [rbp+D1Ch]

  v1305 = a5;
  v5 = 0LL;
  v1304 = a4;
  v914 = a3;
  v935 = 0LL;
  v1083 = 0LL;
  v943 = 0;
  memset(v897, 0, sizeof(v897));
  v894 = 0;
  memset(uAugend, 0, sizeof(uAugend));
  v981 = 0LL;
  v913 = 0;
  v1240 = 0LL;
  v942 = 0LL;
  v896 = 0LL;
  v1256 = 0LL;
  v1147 = 0;
  v1257 = 0LL;
  v1148 = 0;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
    v5 = 0LL;
    goto LABEL_2145;
  }
  v7 = *a1;
  v8 = (char *)(a1 + 1);
  if ( a1 + 1 < a1 )
  {
    Acl = -1073741675;
    v5 = 0LL;
    goto LABEL_2145;
  }
  if ( a2 - 4 < (unsigned int)v7 )
  {
    Acl = -1073741762;
    goto LABEL_2145;
  }
  v9 = (unsigned int *)&v8[v7];
  v912 = *a1;
  if ( &v8[v7] < v8 || (unsigned int)v7 >= 0xFFFFFFFC )
  {
    Acl = -1073741675;
    goto LABEL_2145;
  }
  if ( a2 - ((_DWORD)v7 + 4) < 4 )
  {
    Acl = -1073741762;
    goto LABEL_2145;
  }
  v10 = *v9;
  v11 = v9 + 1;
  if ( v9 + 1 < v9 )
    goto LABEL_2140;
  v12 = v7 + 8;
  if ( (int)v7 + 8 < (unsigned int)(v7 + 4) )
    goto LABEL_2140;
  if ( a2 - v12 < (unsigned int)v10 )
  {
    Acl = -1073741762;
    goto LABEL_2145;
  }
  v13 = (unsigned int *)((char *)v11 + v10);
  if ( (unsigned int *)((char *)v11 + v10) < v11 )
    goto LABEL_2140;
  v14 = v10 + v12;
  if ( (unsigned int)v10 + v12 < v12 )
    goto LABEL_2140;
  if ( a2 - v14 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_2145;
  }
  v15 = *v13;
  Src = v13 + 1;
  if ( v13 + 1 < v13 )
    goto LABEL_2140;
  v16 = v14 + 4;
  if ( v14 + 4 < v14 )
    goto LABEL_2140;
  if ( a2 - v16 < (unsigned int)v15 )
  {
    Acl = -1073741762;
    goto LABEL_2145;
  }
  if ( (unsigned int)v15 + v16 < v16 )
  {
LABEL_2140:
    Acl = -1073741675;
    goto LABEL_2145;
  }
  if ( a2 != (_DWORD)v15 + v16 )
  {
    Acl = -1073741762;
    goto LABEL_2145;
  }
  if ( (unsigned int)(v7 + v15 + v10) + 12LL != a2 )
  {
    Acl = -1073741762;
    goto LABEL_2145;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
  if ( !PoolWithTag )
  {
    Acl = -1073741801;
    goto LABEL_56;
  }
  *PoolWithTag = 0LL;
  Acl = 0;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[4] = 0LL;
  PoolWithTag[5] = 0LL;
  if ( !v8 )
  {
    *(_DWORD *)PoolWithTag = 0;
    PoolWithTag[1] = 0LL;
    goto LABEL_35;
  }
  *(_DWORD *)PoolWithTag = v7;
  if ( (_DWORD)v7 )
  {
    v18 = ExAllocatePoolWithTag(PagedPool, v7, 0x20534C53u);
    if ( !v18 )
      goto LABEL_45;
    PoolWithTag[1] = v18;
    memmove(v18, v8, v7);
LABEL_35:
    v19 = &v8[v912 + 4];
    if ( v19 )
    {
      *((_DWORD *)PoolWithTag + 4) = v10;
      if ( !(_DWORD)v10 )
      {
        Acl = -1073741762;
        goto LABEL_46;
      }
      v20 = ExAllocatePoolWithTag(PagedPool, v10, 0x20534C53u);
      if ( !v20 )
      {
LABEL_45:
        Acl = -1073741801;
        goto LABEL_46;
      }
      PoolWithTag[3] = v20;
      Acl = 0;
      memmove(v20, v19, v10);
    }
    else
    {
      *((_DWORD *)PoolWithTag + 4) = 0;
      PoolWithTag[3] = 0LL;
    }
    v21 = Src;
    if ( Src )
    {
      *((_DWORD *)PoolWithTag + 8) = v15;
      if ( !(_DWORD)v15 )
      {
        Acl = -1073741762;
        goto LABEL_46;
      }
      v22 = ExAllocatePoolWithTag(PagedPool, v15, 0x20534C53u);
      if ( !v22 )
        goto LABEL_45;
      PoolWithTag[5] = v22;
      Acl = 0;
      memmove(v22, v21, v15);
    }
    else
    {
      *((_DWORD *)PoolWithTag + 8) = 0;
      PoolWithTag[5] = 0LL;
    }
    v5 = PoolWithTag;
    goto LABEL_56;
  }
  Acl = -1073741762;
LABEL_46:
  v23 = (void *)PoolWithTag[1];
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0x20534C53u);
    PoolWithTag[1] = 0LL;
  }
  v24 = (void *)PoolWithTag[3];
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x20534C53u);
    PoolWithTag[3] = 0LL;
  }
  v25 = (void *)PoolWithTag[5];
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0x20534C53u);
    PoolWithTag[5] = 0LL;
  }
  ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
LABEL_56:
  if ( Acl < 0 )
  {
    if ( v5 )
    {
      v27 = (void *)v5[1];
      if ( v27 )
      {
        ExFreePoolWithTag(v27, 0x20534C53u);
        v5[1] = 0LL;
      }
      v28 = (void *)v5[3];
      if ( v28 )
      {
        ExFreePoolWithTag(v28, 0x20534C53u);
        v5[3] = 0LL;
      }
      v29 = (void *)v5[5];
      if ( v29 )
      {
        ExFreePoolWithTag(v29, 0x20534C53u);
        v5[5] = 0LL;
      }
      ExFreePoolWithTag(v5, 0x20534C53u);
    }
    v26 = (unsigned int *)v935;
  }
  else
  {
    v26 = (unsigned int *)v5;
    v935 = v5;
  }
  if ( Acl < 0 )
    goto LABEL_2144;
  v1229 = 0LL;
  v30 = 0LL;
  v1087 = 0LL;
  Acl = 0;
  v934 = 0;
  if ( !v26 || !*((_QWORD *)v26 + 1) || !*v26 || !*((_QWORD *)v26 + 5) || !v26[8] || !*((_QWORD *)v26 + 3) || !v26[4] )
    goto LABEL_2143;
  v1229 = *v26;
  v31 = -1;
  v32 = *((_QWORD *)v26 + 1);
  v33 = *((_QWORD *)v26 + 3);
  v34 = (__int64 *)*((_QWORD *)v26 + 5);
  v35 = *v26;
  v912 = v33;
  v1072 = v32;
  if ( v32 && v35 && v33 && v34 && v26[8] == 8 && v26[4] == 160 )
  {
    v36 = *v34;
    v37 = v35 - 8;
    LOBYTE(v904) = 0;
    v928 = (PVOID)v37;
    v38 = ExAllocatePoolWithTag(PagedPool, v37, 0x20534C53u);
    P = v38;
    if ( v38 )
    {
      v1357 = v36;
      Src = v38;
      v39 = (unsigned __int8 *)v32;
      v920 = v37 & 7;
      v40 = v38;
      if ( (v37 & 7) != 0 )
      {
        v898 = -1;
        v900 = 0;
        v41 = 0;
        v903 = 0;
        v42 = -1;
        v902 = 0;
        v43 = 0;
        v44 = 0;
        v45 = 0;
        v46 = 56;
        do
        {
          v47 = *v39;
          if ( v45 >= 4 )
            v43 |= v47 << v46;
          else
            v44 |= v47 << (v46 - 32);
          ++v39;
          ++v45;
          v46 -= 8;
        }
        while ( v45 < (unsigned __int8)(v37 & 7) );
        v902 = v44;
        v903 = v43;
        v48 = 16LL;
        v49 = 30;
        v918 = 16LL;
        v50 = (unsigned __int8 *)(v912 + 158);
        v51 = (unsigned __int8 *)(v912 + 126);
        do
        {
          v52 = v50[1];
          if ( v52 < 0x1Fu )
          {
            v53 = funcs_1404984A6[v52]((char)(v49 + 1), *(v51 - 2), *(v51 - 1), *v51, v51[1], (__int64)&v1357, v41);
            v41 = v900;
            v42 = v53 ^ v898;
            v48 = v918;
            v898 ^= v53;
          }
          if ( *v50 < 0x1Fu )
          {
            v54 = funcs_1404984A6[*v50](v49, *(v51 - 6), *(v51 - 5), *(v51 - 4), *(v51 - 3), (__int64)&v1357, v42);
            v42 = v898;
            v41 = v54 ^ v900;
            v48 = v918;
            v900 ^= v54;
          }
          v49 -= 2;
          v51 -= 8;
          v50 -= 2;
          v918 = --v48;
        }
        while ( v48 );
        v55 = v902 ^ v41;
        v56 = v903 ^ v42;
        v57 = 0;
        v58 = v920;
        v31 = -1;
        v40 = Src;
        v900 = v55;
        v898 = v56;
        if ( (int)v920 > 0 )
        {
          do
          {
            if ( v57 >= 4 )
            {
              v56 = __ROL4__(v56, 8);
              *v40 = v56;
            }
            else
            {
              v55 = __ROL4__(v55, 8);
              *v40 = v55;
            }
            ++v40;
            ++v57;
          }
          while ( v57 < v58 );
          v55 = v900;
          v56 = v898;
        }
        LODWORD(v36) = v1357;
        v59 = v58 - 4;
        v37 = (SIZE_T)v928;
        if ( v58 - 4 <= 0 )
        {
          v898 = 0;
          v60 = 0;
          if ( v59 < 0 )
          {
            v55 = v55 >> (-8 * v59) << (-8 * v59);
            v900 = v55;
          }
        }
        else
        {
          v60 = v56 >> (8 * (4 - v59)) << (8 * (4 - v59));
          v898 = v60;
        }
      }
      else
      {
        v903 = -1;
        v902 = 0;
        v60 = 0;
        v898 = 0;
        v55 = 0;
        v900 = 0;
      }
      v920 = v37 >> 3;
      if ( v37 >> 3 )
      {
        v61 = v40 + 7;
        v62 = v39 + 2;
        v63 = v912 + 158;
        v912 += 126LL;
        for ( i = v63; ; v63 = i )
        {
          v64 = v62[2] << 8;
          v65 = v62[3];
          v66 = (v62[1] | ((*v62 | ((*(v62 - 1) | (*(v62 - 2) << 8)) << 8)) << 8)) ^ v55;
          v921 = v62[1] | ((*v62 | ((*(v62 - 1) | (*(v62 - 2) << 8)) << 8)) << 8);
          v67 = v62[5] | ((v62[4] | ((v65 | v64) << 8)) << 8);
          Src = v62 + 8;
          v936 = v67;
          v68 = (unsigned __int16)v36;
          v69 = v66 ^ v67 ^ v60 ^ v36 ^ HIDWORD(v1357);
          v70 = (v69 >> 8) ^ (WORD2(v1357) * (WORD1(v1357) ^ v69)) ^ v66;
          v71 = (WORD1(v1357) * __ROR4__(HIDWORD(v1357) - v70, 11) - __ROR4__(v70, 12)) ^ v69;
          v72 = ((unsigned __int16)v36 * __ROL4__(v71 ^ HIDWORD(v1357), 8) - __ROL4__(v71, 2)) ^ v70;
          v73 = __ROR4__(v72, 9) ^ (HIWORD(v1357) * __ROR4__(v72 - v36, 4)) ^ v71;
          v74 = (__ROR4__(v73, 4) + WORD2(v1357) * __ROR4__(v36 - v73, 10)) ^ v72;
          v75 = (WORD1(v1357) * __ROL4__(HIWORD(v1357) ^ v74, 4) - __ROR4__(v74, 16)) ^ v73;
          v76 = 30;
          v77 = (unsigned __int8 *)v63;
          v78 = 16LL;
          v79 = ((unsigned __int16)v36 * (WORD1(v1357) ^ v75) - __ROR4__(v75, 7)) ^ v74;
          v80 = (v79 - v36 - HIWORD(v1357)) ^ v75;
          v81 = __ROR4__(v80, 11) ^ (WORD2(v1357) * __ROR4__(v36 - v80, 9)) ^ v79;
          v82 = (unsigned __int8 *)v912;
          v83 = (WORD1(v1357) * (v81 - WORD2(v1357)) - (v81 >> 13)) ^ v80;
          v898 = v83;
          v84 = (v83 >> 15) ^ (v68 * __ROL4__(v83 - WORD2(v1357), 3)) ^ v81;
          v900 = v84;
          do
          {
            v85 = v77[1];
            if ( v85 < 0x1Fu )
            {
              v86 = funcs_1404984A6[v85]((char)(v76 + 1), *(v82 - 2), *(v82 - 1), *v82, v82[1], (__int64)&v1357, v84);
              v84 = v900;
              v83 = v86 ^ v898;
              v898 ^= v86;
            }
            if ( *v77 < 0x1Fu )
            {
              v87 = funcs_1404984A6[*v77](v76, *(v82 - 6), *(v82 - 5), *(v82 - 4), *(v82 - 3), (__int64)&v1357, v83);
              v83 = v898;
              v84 = v87 ^ v900;
              v900 ^= v87;
            }
            v76 -= 2;
            v82 -= 8;
            v77 -= 2;
            --v78;
          }
          while ( v78 );
          v88 = v936;
          v900 = v902 ^ v84;
          v898 = v903 ^ v83;
          *(v61 - 4) = v902 ^ v84;
          v900 = __ROR4__(v900, 8);
          *v61 = v898;
          v898 = __ROR4__(v898, 8);
          *(v61 - 5) = v900;
          v900 = __ROR4__(v900, 8);
          *(v61 - 1) = v898;
          v898 = __ROR4__(v898, 8);
          *(v61 - 6) = v900;
          v900 = __ROR4__(v900, 8);
          *(v61 - 2) = v898;
          v898 = __ROR4__(v898, 8);
          *(v61 - 7) = v900;
          *(v61 - 3) = v898;
          v61 += 8;
          v55 = __ROR4__(v900, 8);
          v60 = __ROR4__(v898, 8);
          v89 = v920-- == 1;
          v900 = v55;
          v898 = v60;
          v902 = v921;
          v903 = v88;
          if ( v89 )
            break;
          LODWORD(v36) = v1357;
          v62 = (unsigned __int8 *)Src;
        }
        Acl = v934;
        v31 = -1;
        v37 = (SIZE_T)v928;
      }
      v90 = 0LL;
      if ( v37 )
      {
        if ( v37 < 0x20 )
        {
          v100 = v904;
        }
        else
        {
          v91 = 0LL;
          v92 = 0LL;
          v93 = (const __m128i *)((char *)P + 16);
          do
          {
            v94 = _mm_loadu_si128(v93 - 1);
            v90 += 32LL;
            v93 += 2;
            v91 = _mm_xor_si128(v94, v91);
            v95 = _mm_xor_si128(_mm_loadu_si128(v93 - 2), v92);
            v92 = v95;
          }
          while ( v90 < v37 - (v37 & 0x1F) );
          v96 = _mm_xor_si128(v91, v95);
          v97 = _mm_xor_si128(v96, _mm_srli_si128(v96, 8));
          v98 = _mm_xor_si128(v97, _mm_srli_si128(v97, 4));
          v99 = _mm_xor_si128(v98, _mm_srli_si128(v98, 2));
          v100 = _mm_cvtsi128_si32(_mm_xor_si128(v99, _mm_srli_si128(v99, 1)));
          v904 = v100;
        }
        if ( v90 < v37 )
        {
          do
            LOBYTE(v100) = *((_BYTE *)P + v90++) ^ v100;
          while ( v90 < v37 );
          v904 = v100;
        }
      }
      if ( (unsigned __int8)v904 == *(_QWORD *)(v37 + v1072) )
      {
        v101 = P;
        v1083 = P;
        v1229 = v37;
        v1087 = 0LL;
        v943 = v37;
        goto LABEL_132;
      }
      ExFreePoolWithTag(P, 0x20534C53u);
      v30 = v1087;
    }
    else
    {
      v30 = v1087;
    }
  }
  Acl = -1073741823;
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0x20534C53u);
    v1087 = 0LL;
  }
  v101 = v1083;
  LODWORD(v37) = v943;
LABEL_132:
  if ( Acl >= 0 )
  {
    if ( (unsigned int)v37 < 4 )
    {
      Acl = -1073741762;
      goto LABEL_2144;
    }
    LODWORD(v919) = *v101;
    if ( v101 + 1 < v101 )
      goto LABEL_142;
    if ( (unsigned int)(v37 - 4) < 4 )
    {
      Acl = -1073741762;
      goto LABEL_2144;
    }
    v102 = (unsigned int)v101[1];
    v103 = (char *)(v101 + 2);
    if ( v101 + 2 < v101 + 1 )
      goto LABEL_142;
    if ( (int)v37 - 8 < (unsigned int)v102 )
    {
      Acl = -1073741762;
      goto LABEL_2144;
    }
    if ( (unsigned int)v102 >= 0xFFFFFFF8 )
    {
LABEL_142:
      Acl = -1073741675;
      goto LABEL_2144;
    }
    if ( (char *)v101 + (unsigned int)v37 < &v103[v102] || (unsigned int)v37 - 8LL - v102 >= 8 )
    {
      Acl = -1073741762;
      goto LABEL_172;
    }
    v104 = 0LL;
    Acl = 0;
    v105 = 0;
    if ( v101 != (_DWORD *)-8LL )
    {
      v106 = (unsigned __int64)&v103[v102];
      v107 = (char *)(v101 + 2);
      if ( &v103[v102] < v103 )
      {
LABEL_160:
        Acl = -1073741675;
        goto LABEL_172;
      }
      if ( (unsigned __int64)v103 < v106 )
      {
        v108 = v1140;
        while ( v107 + 4 >= v107 )
        {
          if ( (unsigned __int64)(v107 + 4) > v106 )
            goto LABEL_159;
          if ( *(_DWORD *)v107 >= 0xFFFFFFFC )
          {
            Acl = -1073741675;
          }
          else
          {
            v108 = *(_DWORD *)v107 + 4;
            v1140 = v108;
            Acl = 0;
          }
          if ( Acl < 0 )
            goto LABEL_2144;
          v109 = &v107[v108];
          if ( v109 < v107 )
            goto LABEL_160;
          v107 += v108;
          Acl = 0;
          if ( (unsigned __int64)v109 > v106 )
            goto LABEL_159;
          ++v105;
          if ( (unsigned __int64)v109 >= v106 )
            goto LABEL_158;
        }
        goto LABEL_160;
      }
LABEL_158:
      if ( v107 != (char *)v106 )
      {
LABEL_159:
        Acl = -1073741811;
        goto LABEL_172;
      }
    }
    if ( (_DWORD)v102 )
    {
      v104 = ExAllocatePoolWithTag(PagedPool, v102, 0x20534C53u);
      if ( !v104 )
      {
        Acl = -1073741801;
LABEL_168:
        if ( Acl < 0 )
          goto LABEL_2144;
        if ( (_DWORD)v919 != LODWORD(v897[0]) )
        {
          Acl = -1073741762;
          goto LABEL_2144;
        }
LABEL_172:
        if ( Acl < 0 )
          goto LABEL_2144;
        if ( v897[1] )
        {
          if ( LODWORD(v897[0]) )
          {
            v110 = *(_DWORD *)v897[1];
            v111 = (int *)(v897[1] + 4LL);
            if ( (unsigned __int64)(v897[1] + 4LL) < v897[1] )
            {
              Acl = -1073741675;
            }
            else
            {
              GrantedAccess[1] = *(_DWORD *)v897[1];
              Acl = 0;
              if ( !v110 )
                v111 = 0LL;
              v1310[1] = (ULONGLONG)v111;
              if ( v110 != 4 )
              {
                Acl = -1073741789;
                goto LABEL_182;
              }
              v1149 = *v111;
            }
          }
          else
          {
            Acl = -1073741811;
          }
        }
        else
        {
          Acl = -1073741811;
        }
        if ( Acl < 0 )
          goto LABEL_2144;
        if ( !v897[1] )
        {
          v5 = v896;
          Acl = -1073741811;
          v897[0] = 0LL;
          goto LABEL_2147;
        }
        if ( LODWORD(v897[0]) <= 1 )
        {
          Acl = -1073741811;
          goto LABEL_2144;
        }
        v112 = (unsigned int *)v897[1];
        v113 = 0;
        do
        {
          v114 = *v112;
          v115 = v112 + 1;
          if ( v112 + 1 < v112 )
            goto LABEL_142;
          v112 = (unsigned int *)((char *)v115 + v114);
          if ( (unsigned int *)((char *)v115 + v114) < v115 )
            goto LABEL_142;
          ++v113;
        }
        while ( !v113 );
        v116 = *v112;
        v117 = v112 + 1;
        if ( v112 + 1 < v112 )
          goto LABEL_142;
        v1147 = *v112;
        if ( !(_DWORD)v116 )
          v117 = 0LL;
        v1256 = v117;
        if ( LODWORD(v897[0]) <= 2 )
        {
          Acl = -1073741811;
          goto LABEL_2144;
        }
        v118 = (unsigned int *)v897[1];
        for ( j = 0; j < 2; ++j )
        {
          v120 = *v118;
          v121 = v118 + 1;
          if ( v118 + 1 < v118 )
            goto LABEL_142;
          v118 = (unsigned int *)((char *)v121 + v120);
          if ( (unsigned int *)((char *)v121 + v120) < v121 )
            goto LABEL_142;
        }
        v122 = *v118;
        v123 = v118 + 1;
        if ( v118 + 1 < v118 )
        {
          Acl = -1073741675;
          goto LABEL_2144;
        }
        v1148 = *v118;
        if ( !(_DWORD)v122 )
          v123 = 0LL;
        v1257 = v123;
        v124 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
        if ( !v124 )
        {
          v126 = v942;
          Acl = -1073741801;
          goto LABEL_229;
        }
        *v124 = 0LL;
        Acl = 0;
        v124[1] = 0LL;
        v124[2] = 0LL;
        v124[3] = 0LL;
        v124[4] = 0LL;
        v124[5] = 0LL;
        *(_DWORD *)v124 = 0;
        v124[1] = 0LL;
        if ( v117 )
        {
          *((_DWORD *)v124 + 4) = v116;
          if ( !(_DWORD)v116 )
          {
            Acl = -1073741762;
LABEL_219:
            v129 = (void *)v124[1];
            if ( v129 )
            {
              ExFreePoolWithTag(v129, 0x20534C53u);
              v124[1] = 0LL;
            }
            v130 = (void *)v124[3];
            if ( v130 )
            {
              ExFreePoolWithTag(v130, 0x20534C53u);
              v124[3] = 0LL;
            }
            v131 = (void *)v124[5];
            if ( v131 )
            {
              ExFreePoolWithTag(v131, 0x20534C53u);
              v124[5] = 0LL;
            }
            ExFreePoolWithTag(v124, 0x20534C53u);
            v126 = v942;
LABEL_229:
            if ( Acl < 0 )
              goto LABEL_2144;
            switch ( v1149 )
            {
              case 0:
                SourceString = 0LL;
                v132 = 0;
                v946 = 0;
                v917 = 0;
                P = 0LL;
                Timeout.QuadPart = 0LL;
                if ( !v126 )
                {
                  Acl = -1073741811;
                  v5 = 0LL;
                  goto LABEL_2145;
                }
                if ( v897[1] )
                {
                  if ( LODWORD(v897[0]) > 3 )
                  {
                    v134 = v897[1];
                    pullResult = v897[1];
                    do
                    {
                      v133 = RtlULongLongAdd(v134, 4uLL, &pullResult);
                      if ( v133 < 0 )
                        goto LABEL_245;
                      v133 = RtlULongLongAdd(pullResult, v135, &pullResult);
                      if ( v133 < 0 )
                        goto LABEL_245;
                      v134 = pullResult;
                    }
                    while ( (unsigned int)(v136 + 1) < 3 );
                    v133 = RtlULongLongAdd(pullResult, 4uLL, &pullResult);
                    if ( v133 < 0 )
                    {
LABEL_245:
                      v137 = v1150;
                      v138 = v1258;
                    }
                    else
                    {
                      v138 = (_QWORD *)pullResult;
                      v1150 = v137;
                      if ( !v137 )
                        v138 = 0LL;
                      v1258 = v138;
                    }
                    if ( v133 < 0 )
                    {
LABEL_521:
                      Acl = v133;
                      if ( v133 < 0 )
                        goto LABEL_2144;
                      goto LABEL_733;
                    }
                    if ( v137 != 8 )
                    {
                      v133 = -1073741789;
                      goto LABEL_521;
                    }
                    v1263 = *v138;
                  }
                  else
                  {
                    v133 = -1073741811;
                  }
                }
                else
                {
                  v133 = -1073741811;
                }
                if ( v133 < 0 )
                  goto LABEL_521;
                if ( v897[1] )
                {
                  if ( LODWORD(v897[0]) > 4 )
                  {
                    v139 = v897[1];
                    v990 = v897[1];
                    do
                    {
                      v133 = RtlULongLongAdd(v139, 4uLL, &v990);
                      if ( v133 < 0 )
                        goto LABEL_263;
                      v133 = RtlULongLongAdd(v990, v140, &v990);
                      if ( v133 < 0 )
                        goto LABEL_263;
                      v139 = v990;
                    }
                    while ( (unsigned int)(v141 + 1) < 4 );
                    v133 = RtlULongLongAdd(v990, 4uLL, &v990);
                    if ( v133 < 0 )
                    {
LABEL_263:
                      v142 = v1045;
                      v143 = psz;
                    }
                    else
                    {
                      v143 = (const wchar_t *)v990;
                      v1045 = v142;
                      if ( !v142 )
                        v143 = 0LL;
                      psz = v143;
                    }
                    if ( v133 < 0 )
                      goto LABEL_517;
                    if ( !v142 )
                    {
                      v133 = -1073741762;
                      goto LABEL_282;
                    }
                    if ( (v142 & 1) != 0 )
                    {
                      v133 = -1073741762;
                      goto LABEL_282;
                    }
                    if ( v143[((unsigned __int64)v142 >> 1) - 1] )
                    {
                      v133 = -1073741762;
                      goto LABEL_282;
                    }
                    if ( StringCbLengthW(v143, v142, &pcbLength) < 0 )
                    {
                      v133 = -1073741762;
                      goto LABEL_282;
                    }
                    if ( pcbLength + 2 != v1045 )
                    {
                      v133 = -1073741762;
                      goto LABEL_282;
                    }
                    v1260 = (void *)psz;
                    v1008 = pcbLength >> 1;
                  }
                  else
                  {
                    v133 = -1073741811;
                  }
                }
                else
                {
                  v133 = -1073741811;
                }
                if ( v133 < 0 )
                  goto LABEL_517;
                v144 = 2 * v1008 + 2;
                if ( 2 * v1008 == -2 )
                {
                  v133 = -1073741762;
                }
                else
                {
                  v145 = v144;
                  v146 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v144, 0x20534C53u);
                  v147 = v146;
                  if ( v146 )
                  {
                    v133 = 0;
                    memmove(v146, v1260, v145);
                    v1056 = v1008;
                    SourceString = v147;
                  }
                  else
                  {
                    v133 = -1073741801;
                  }
                }
LABEL_282:
                if ( v133 >= 0 )
                {
                  if ( v897[1] )
                  {
                    if ( LODWORD(v897[0]) > 5 )
                    {
                      v148 = v897[1];
                      v991 = v897[1];
                      do
                      {
                        v133 = RtlULongLongAdd(v148, 4uLL, &v991);
                        if ( v133 < 0 )
                          goto LABEL_295;
                        v133 = RtlULongLongAdd(v991, v149, &v991);
                        if ( v133 < 0 )
                          goto LABEL_295;
                        v148 = v991;
                      }
                      while ( (unsigned int)(v150 + 1) < 5 );
                      v133 = RtlULongLongAdd(v991, 4uLL, &v991);
                      if ( v133 < 0 )
                      {
LABEL_295:
                        v151 = v1151;
                        v152 = v1261;
                      }
                      else
                      {
                        v152 = (_DWORD *)v991;
                        v1151 = v151;
                        if ( !v151 )
                          v152 = 0LL;
                        v1261 = v152;
                      }
                      if ( v133 < 0 )
                        goto LABEL_517;
                      if ( v151 != 4 )
                      {
                        v133 = -1073741789;
                        goto LABEL_517;
                      }
                      v1157 = *v152;
                    }
                    else
                    {
                      v133 = -1073741811;
                    }
                  }
                  else
                  {
                    v133 = -1073741811;
                  }
                  if ( v133 >= 0 )
                  {
                    if ( v897[1] )
                    {
                      if ( LODWORD(v897[0]) > 6 )
                      {
                        v153 = v897[1];
                        v992 = v897[1];
                        do
                        {
                          v133 = RtlULongLongAdd(v153, 4uLL, &v992);
                          if ( v133 < 0 )
                            goto LABEL_313;
                          v133 = RtlULongLongAdd(v992, v154, &v992);
                          if ( v133 < 0 )
                            goto LABEL_313;
                          v153 = v992;
                        }
                        while ( (unsigned int)(v155 + 1) < 6 );
                        v133 = RtlULongLongAdd(v992, 4uLL, &v992);
                        if ( v133 < 0 )
                        {
LABEL_313:
                          v156 = v1152;
                          v157 = v1262;
                        }
                        else
                        {
                          v157 = (UINT *)v992;
                          v1152 = v156;
                          if ( !v156 )
                            v157 = 0LL;
                          v1262 = v157;
                        }
                        if ( v133 < 0 )
                          goto LABEL_517;
                        if ( v156 != 4 )
                        {
                          v133 = -1073741789;
                          goto LABEL_517;
                        }
                        NumberOfBytes = *v157;
                      }
                      else
                      {
                        v133 = -1073741811;
                      }
                    }
                    else
                    {
                      v133 = -1073741811;
                    }
                    if ( v133 >= 0 )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      v158 = NumberOfBytes;
                      if ( NumberOfBytes )
                      {
                        v159 = 1;
                        if ( NumberOfBytes <= 0x100000 )
                        {
LABEL_331:
                          P = ExAllocatePoolWithTag(PagedPool, v158, 0x20534C53u);
                          if ( !P )
                          {
                            v133 = -1073741801;
                            goto LABEL_517;
                          }
                          v163 = qword_140747440(&DestinationString, &v946, P, v158, &v917);
                          v939 = v163;
                          v161 = v163;
                          if ( v163 != -1073741789 )
                          {
                            v133 = v163;
                            if ( v163 < 0 )
                              goto LABEL_517;
                          }
                          if ( v158 >= v917 )
                            v158 = v917;
LABEL_340:
                          v164 = 8;
                          v944 = 8;
                          if ( v158 >= 0xFFFFFFFC )
                          {
                            v133 = -1073741675;
                          }
                          else
                          {
                            v164 = v158 + 4;
                            v944 = v158 + 4;
                            v133 = 0;
                          }
                          if ( v133 < 0 )
                          {
                            v167 = v1056;
                            LODWORD(v1014) = v1056;
                          }
                          else
                          {
                            v165 = v164 + 28;
                            if ( v165 < 0x1C )
                              goto LABEL_516;
                            v944 = 8;
                            v166 = v165 + 8;
                            if ( v165 + 8 < v165 )
                              goto LABEL_516;
                            v944 = 8;
                            v167 = v165 + 16;
                            LODWORD(v1014) = v166 + 8;
                            if ( v166 + 8 < v166 )
                              goto LABEL_516;
                            v133 = 0;
                          }
                          if ( v133 < 0 )
                            goto LABEL_517;
                          v168 = v167 + 8;
                          if ( v167 >= 0xFFFFFFF8 )
                          {
                            v1166 = -1;
                            goto LABEL_516;
                          }
                          v1166 = v167 + 8;
                          v169 = (v167 + 15) & 0xFFFFFFF8;
                          if ( v169 >= v168 )
                          {
                            v170 = v169 + 8;
                            if ( v169 + 8 < v169 )
                            {
                              v1153 = -1;
                              goto LABEL_363;
                            }
                            v1153 = v169 + 8;
                            v133 = 0;
                          }
                          else
                          {
                            v170 = v1056;
                            v133 = -1073741675;
                          }
                          if ( v133 < 0 )
                            goto LABEL_517;
                          v171 = v170 + 4;
                          v172 = *((_DWORD *)v942 + 8);
                          v173 = *((_DWORD *)v942 + 4);
                          if ( v171 >= 4 )
                          {
                            v174 = v171 + 4;
                            if ( v171 + 4 >= v171 )
                            {
                              v175 = v174 + v173;
                              if ( v174 + v173 >= v174 )
                              {
                                v176 = v175 + 4;
                                if ( v175 + 4 >= v175 && v176 + v172 >= v176 )
                                {
                                  v133 = 0;
                                  v1252 = v176 + v172;
                                  v921 = v176 + v172;
                                  goto LABEL_364;
                                }
                              }
                            }
                          }
LABEL_363:
                          v133 = -1073741675;
LABEL_364:
                          if ( v133 < 0 )
                            goto LABEL_517;
                          if ( v914 >= v921 && v161 >= 0 )
                          {
                            v177 = MEMORY[0xFFFFF78000000320];
                            v178 = v177 * KeQueryTimeIncrement() / 10000;
                            if ( (unsigned __int64)(v178 - g_qwSystemInitTime) >= 0xA4CBFB )
                            {
                              v179 = KeWaitForSingleObject(&stru_1402FA900, UserRequest, 1, 0, &Timeout);
                              if ( v179 >= 0 && v179 != 192 && v179 != 258 )
                              {
                                v180 = 1;
                                RtlInitUnicodeString(&v1314, L"Security-SPP-GenuineLocalStatus");
                                v181 = qword_140747440(&v1314, &v1154, &v1155, 4LL, v1253);
                                if ( v181 == -1073741772 )
                                {
                                  v180 = 0;
                                }
                                else if ( v181 >= 0 && (v1154 != 4 || !v1155) )
                                {
                                  v180 = 0;
                                }
                                NumberOfBytes_4 = v180;
                                if ( g_ulOldGenuineState != v180 )
                                {
                                  if ( v180 )
                                  {
                                    KeResetEvent(&stru_1402FA8E0);
                                  }
                                  else
                                  {
                                    v182 = MEMORY[0xFFFFF78000000320];
                                    qword_140747168 = v182 * KeQueryTimeIncrement() / 10000;
                                  }
                                  v180 = NumberOfBytes_4;
                                }
                                g_ulOldGenuineState = v180;
                                if ( v180 || (unsigned __int64)(v178 - qword_140747168) < 0xADF4FC || !dword_1407471D0 )
                                  goto LABEL_403;
                                KeSetEvent(&stru_1402FA8E0, 1, 0);
                                v1011 = 4;
                                v1156 = 0;
                                KeyHandle = 0LL;
                                v183 = ZwOpenKey(&KeyHandle, 1u, &stru_140747838);
                                if ( v183 < 0 )
                                {
                                  v183 = qword_140747440(aBd, &v1011, &v945, 4LL, &v1156);
                                  v184 = v945;
                                }
                                else
                                {
                                  v184 = 3;
                                  v945 = 3;
                                }
                                if ( v183 < 0 || v1011 != 4 || (unsigned int)(v184 - 1) > 2 )
                                {
                                  v184 = 1;
                                  v945 = 1;
                                }
                                if ( KeyHandle )
                                {
                                  ZwClose(KeyHandle);
                                  KeyHandle = 0LL;
                                }
                                v1012 = 0;
                                v1362 = 0LL;
                                v1361 = 0;
                                v1013 = 0;
                                if ( (int)qword_140747440(aLn, &v1012, &v1361, 12LL, &v1013) >= 0
                                  && v1012 == 3
                                  && v1013 == 12 )
                                {
                                  v185 = 0;
                                  v186 = (unsigned int *)&v1361;
                                  while ( 1 )
                                  {
                                    v187 = *v186;
                                    if ( (*v186 & 0xF) == v184 )
                                      break;
                                    ++v185;
                                    ++v186;
                                    if ( v185 >= 3 )
                                      goto LABEL_400;
                                  }
                                }
                                else
                                {
LABEL_400:
                                  v187 = dword_140747064 & 0xFFFF0000 | 0x3211;
                                }
                                dword_140747064 = v187;
                                if ( v1157 )
                                  v132 = v187;
                                else
LABEL_403:
                                  KeReleaseMutex(&stru_1402FA900, 0);
                              }
                            }
                          }
                          uAugend[0] = v1014;
                          if ( !(_DWORD)v1014 )
                          {
                            v133 = -1073741762;
                            goto LABEL_517;
                          }
                          v188 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v1014, 0x20534C53u);
                          if ( !v188 )
                          {
                            v133 = -1073741801;
                            goto LABEL_517;
                          }
                          *(_QWORD *)&uAugend[1] = v188;
                          v189 = 0;
                          v894 = 0;
                          v1015 = v939 | 0x10000000;
                          if ( &v1015 )
                          {
                            v133 = RtlULongLongAdd((ULONGLONG)v188, 4uLL, v1315);
                            if ( v133 >= 0 )
                            {
                              if ( v191 + 2 > (_DWORD *)((char *)v191 + uAugend[0]) )
                              {
                                v133 = -1073741789;
                                goto LABEL_517;
                              }
                              v192 = (int *)v1315[0];
                              *v191 = v190;
                              *v192 = v1015;
                              v189 = ++v894;
                            }
                          }
                          else
                          {
                            v133 = -1073741811;
                          }
                          if ( v133 < 0 )
                            goto LABEL_517;
                          v1232 = v1263;
                          if ( &v1232 )
                          {
                            if ( !*(_QWORD *)&uAugend[1] )
                            {
                              v1016 = 12;
                              if ( uAugend[0] + 12 >= uAugend[0] )
                              {
                                ++v189;
                                uAugend[0] += 12;
                                v894 = v189;
                                goto LABEL_434;
                              }
                              uAugend[0] = -1;
LABEL_516:
                              v133 = -1073741675;
                              goto LABEL_517;
                            }
                            v193 = *(_DWORD **)&uAugend[1];
                            v1191 = *(_QWORD *)&uAugend[1];
                            if ( v189 )
                            {
                              v194 = v1016;
                              do
                              {
                                if ( *v193 >= 0xFFFFFFFC )
                                {
                                  v133 = -1073741675;
                                }
                                else
                                {
                                  v194 = *v193 + 4;
                                  v1016 = v194;
                                  v133 = 0;
                                }
                                if ( v133 < 0 )
                                  goto LABEL_517;
                                v133 = RtlULongLongAdd((ULONGLONG)v193, v194, &v1191);
                                if ( v133 < 0 )
                                  goto LABEL_433;
                                v193 = (_DWORD *)v1191;
                              }
                              while ( v195 + 1 < v189 );
                            }
                            v133 = RtlULongLongAdd((ULONGLONG)v193, 4uLL, v1316);
                            if ( v133 >= 0 )
                            {
                              if ( (unsigned __int64)(v196 + 3) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                              {
                                v133 = -1073741789;
                                goto LABEL_517;
                              }
                              v197 = (_QWORD *)v1316[0];
                              *v196 = 8;
                              *v197 = v1232;
                              v189 = ++v894;
                            }
                          }
                          else
                          {
                            v133 = -1073741811;
                          }
LABEL_433:
                          if ( v133 < 0 )
                            goto LABEL_517;
LABEL_434:
                          v1017 = v946;
                          if ( &v1017 )
                          {
                            if ( *(_QWORD *)&uAugend[1] )
                            {
                              v201 = *(UINT **)&uAugend[1];
                              v202 = 0;
                              v1192 = *(_QWORD *)&uAugend[1];
                              if ( v189 )
                              {
                                while ( 1 )
                                {
                                  v203 = RtlUIntAdd(4u, *v201, &v1159);
                                  v133 = v203;
                                  if ( v203 >= 0 )
                                    v204 = v1159;
                                  v947 = v204;
                                  if ( v203 < 0 )
                                    break;
                                  v133 = RtlULongLongAdd(v205, v204, &v1192);
                                  if ( v133 < 0 )
                                    break;
                                  v201 = (UINT *)v1192;
                                  if ( ++v202 >= v189 )
                                    goto LABEL_447;
                                }
                              }
                              else
                              {
LABEL_447:
                                v133 = RtlULongLongAdd((ULONGLONG)v201, 4uLL, v1317);
                                if ( v133 >= 0 )
                                {
                                  if ( (unsigned __int64)(v207 + 2) > *(_QWORD *)&uAugend[1]
                                                                    + (unsigned __int64)uAugend[0] )
                                  {
                                    v133 = -1073741789;
                                    goto LABEL_517;
                                  }
                                  v208 = (_DWORD *)v1317[0];
                                  *v207 = v206;
                                  *v208 = v1017;
                                  v189 = ++v894;
                                }
                              }
                            }
                            else
                            {
                              v198 = RtlUIntAdd(4u, 4u, &puResult);
                              v199 = v947;
                              v133 = v198;
                              if ( v198 >= 0 )
                                v199 = puResult;
                              v947 = v199;
                              if ( v198 >= 0 )
                              {
                                v200 = RtlUIntAdd(uAugend[0], v199, uAugend);
                                v189 = v894;
                                v133 = v200;
                                if ( v200 >= 0 )
                                {
                                  v189 = ++v894;
                                  goto LABEL_453;
                                }
                              }
                            }
                          }
                          else
                          {
                            v133 = -1073741811;
                          }
                          if ( v133 < 0 )
                            goto LABEL_517;
LABEL_453:
                          if ( P )
                          {
                            if ( !v158 )
                              goto LABEL_455;
                          }
                          else if ( v158 )
                          {
LABEL_455:
                            v133 = -1073741811;
                            goto LABEL_456;
                          }
                          if ( *(_QWORD *)&uAugend[1] )
                          {
                            v215 = *(UINT **)&uAugend[1];
                            v216 = 0;
                            v1193 = *(_QWORD *)&uAugend[1];
                            if ( v189 )
                            {
                              while ( 1 )
                              {
                                v217 = RtlUIntAdd(4u, *v215, &v1161);
                                v133 = v217;
                                if ( v217 >= 0 )
                                  v218 = v1161;
                                v948 = v218;
                                if ( v217 < 0 )
                                  break;
                                v133 = RtlULongLongAdd(v219, v218, &v1193);
                                if ( v133 < 0 )
                                  break;
                                v215 = (UINT *)v1193;
                                if ( ++v216 >= v189 )
                                  goto LABEL_477;
                              }
                            }
                            else
                            {
LABEL_477:
                              v133 = RtlULongLongAdd((ULONGLONG)v215, 4uLL, v1318);
                              if ( v133 >= 0 )
                              {
                                if ( (unsigned __int64)v221 + v158 + 4 > *(_QWORD *)&uAugend[1]
                                                                       + (unsigned __int64)uAugend[0] )
                                {
                                  v133 = -1073741789;
                                  goto LABEL_517;
                                }
                                *v221 = v158;
                                if ( v220 )
                                  memmove((void *)v1318[0], v220, v158);
                                v189 = ++v894;
                              }
                            }
                          }
                          else
                          {
                            v212 = RtlUIntAdd(4u, v158, &v1160);
                            v213 = v948;
                            v133 = v212;
                            if ( v212 >= 0 )
                              v213 = v1160;
                            v948 = v213;
                            if ( v212 >= 0 )
                            {
                              v214 = RtlUIntAdd(uAugend[0], v213, uAugend);
                              v189 = v894;
                              v133 = v214;
                              if ( v214 >= 0 )
                              {
                                v189 = ++v894;
                                goto LABEL_457;
                              }
                            }
                          }
LABEL_456:
                          if ( v133 < 0 )
                            goto LABEL_517;
LABEL_457:
                          v1018 = v917;
                          if ( &v1018 )
                          {
                            if ( *(_QWORD *)&uAugend[1] )
                            {
                              v222 = *(UINT **)&uAugend[1];
                              v223 = 0;
                              v1194 = *(_QWORD *)&uAugend[1];
                              if ( v189 )
                              {
                                while ( 1 )
                                {
                                  v224 = RtlUIntAdd(4u, *v222, &v1163);
                                  v133 = v224;
                                  if ( v224 >= 0 )
                                    v225 = v1163;
                                  v949 = v225;
                                  if ( v224 < 0 )
                                    break;
                                  v133 = RtlULongLongAdd(v226, v225, &v1194);
                                  if ( v133 < 0 )
                                    break;
                                  v222 = (UINT *)v1194;
                                  if ( ++v223 >= v189 )
                                    goto LABEL_489;
                                }
                              }
                              else
                              {
LABEL_489:
                                v133 = RtlULongLongAdd((ULONGLONG)v222, 4uLL, v1319);
                                if ( v133 >= 0 )
                                {
                                  if ( (unsigned __int64)(v228 + 2) > *(_QWORD *)&uAugend[1]
                                                                    + (unsigned __int64)uAugend[0] )
                                  {
                                    v133 = -1073741789;
                                    goto LABEL_517;
                                  }
                                  v229 = (UINT *)v1319[0];
                                  *v228 = v227;
                                  *v229 = v1018;
                                  v189 = ++v894;
                                }
                              }
                            }
                            else
                            {
                              v209 = RtlUIntAdd(4u, 4u, &uAddend);
                              v210 = v949;
                              v133 = v209;
                              if ( v209 >= 0 )
                                v210 = uAddend;
                              v949 = v210;
                              if ( v209 >= 0 )
                              {
                                v211 = RtlUIntAdd(uAugend[0], v210, uAugend);
                                v189 = v894;
                                v133 = v211;
                                if ( v211 >= 0 )
                                {
                                  v189 = ++v894;
                                  goto LABEL_495;
                                }
                              }
                            }
                          }
                          else
                          {
                            v133 = -1073741811;
                          }
                          if ( v133 < 0 )
                            goto LABEL_517;
LABEL_495:
                          v1019 = v132;
                          if ( &v1019 )
                          {
                            if ( *(_QWORD *)&uAugend[1] )
                            {
                              v232 = *(UINT **)&uAugend[1];
                              v233 = 0;
                              v1195 = *(_QWORD *)&uAugend[1];
                              if ( v189 )
                              {
                                while ( 1 )
                                {
                                  v234 = RtlUIntAdd(4u, *v232, &v1165);
                                  v133 = v234;
                                  if ( v234 >= 0 )
                                    v235 = v1165;
                                  v950 = v235;
                                  if ( v234 < 0 )
                                    break;
                                  v133 = RtlULongLongAdd(v236, v235, &v1195);
                                  if ( v133 < 0 )
                                    break;
                                  v232 = (UINT *)v1195;
                                  if ( ++v233 >= v237 )
                                    goto LABEL_508;
                                }
                              }
                              else
                              {
LABEL_508:
                                v133 = RtlULongLongAdd((ULONGLONG)v232, 4uLL, &v1313);
                                if ( v133 >= 0 )
                                {
                                  if ( (unsigned __int64)(v239 + 2) > *(_QWORD *)&uAugend[1]
                                                                    + (unsigned __int64)uAugend[0] )
                                  {
                                    v133 = -1073741789;
                                    goto LABEL_517;
                                  }
                                  v240 = (_DWORD *)v1313;
                                  *v239 = v238;
                                  *v240 = v1019;
                                  ++v894;
                                }
                              }
                            }
                            else
                            {
                              v230 = RtlUIntAdd(4u, 4u, &v1164);
                              v231 = v950;
                              v133 = v230;
                              if ( v230 >= 0 )
                                v231 = v1164;
                              v950 = v231;
                              if ( v230 >= 0 )
                              {
                                v133 = RtlUIntAdd(uAugend[0], v231, uAugend);
                                if ( v133 >= 0 )
                                {
                                  ++v894;
                                  v133 = 0;
                                  goto LABEL_517;
                                }
                              }
                            }
                          }
                          else
                          {
                            v133 = -1073741811;
                          }
                          if ( v133 >= 0 )
                            v133 = 0;
                          goto LABEL_517;
                        }
                      }
                      else
                      {
                        v159 = 0;
                      }
                      v160 = qword_140747440(&DestinationString, &v946, 0LL, 0LL, &v917);
                      v939 = v160;
                      v161 = v160;
                      if ( v160 == -1073741789 )
                      {
                        v162 = v917;
                        if ( NumberOfBytes < v917 )
                        {
                          if ( !NumberOfBytes )
                          {
                            v161 = 0;
                            v939 = 0;
                          }
                          goto LABEL_340;
                        }
                      }
                      else
                      {
                        if ( v160 < 0 )
                        {
                          v133 = v160;
                          goto LABEL_517;
                        }
                        v162 = v917;
                        if ( v917 )
                        {
                          v133 = -2147418113;
                          goto LABEL_517;
                        }
                        v159 = 0;
                      }
                      v161 = 0;
                      v158 = v162;
                      v939 = 0;
                      if ( !v159 )
                        goto LABEL_340;
                      goto LABEL_331;
                    }
                  }
                }
LABEL_517:
                if ( SourceString )
                {
                  ExFreePoolWithTag((PVOID)SourceString, 0x20534C53u);
                  SourceString = 0LL;
                }
                if ( P )
                  ExFreePoolWithTag(P, 0x20534C53u);
                goto LABEL_521;
              case 1:
                v241 = (PSID *)qword_140747460;
                v242 = RtlLengthSid(*(PSID *)(qword_140747460 + 392));
                v243 = RtlLengthSid(v241[48]) + v242;
                v244 = RtlLengthSid(v241[34]) + 32 + v243;
                v245 = (ACL *)ExAllocatePoolWithTag(PagedPool, v244, 0x20534C53u);
                v246 = v245;
                if ( !v245 )
                {
                  Acl = -1073741801;
                  goto LABEL_525;
                }
                Acl = RtlCreateAcl(v245, v244, 2u);
                if ( Acl >= 0 )
                {
                  Acl = RtlAddAccessAllowedAce(v246, 2u, 0x20u, v241[48]);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlAddAccessAllowedAce(v246, 2u, 0x20u, v241[49]);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlAddAccessAllowedAce(v246, 2u, 0x20u, v241[34]);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v246, 0);
                          if ( Acl >= 0 )
                          {
                            SeCaptureSubjectContext(&SubjectContext);
                            v251 = SeAccessCheck(
                                     SecurityDescriptor,
                                     &SubjectContext,
                                     0,
                                     0x20u,
                                     0,
                                     0LL,
                                     (PGENERIC_MAPPING)&IopFileMapping,
                                     1,
                                     GrantedAccess,
                                     &AccessStatus);
                            SeReleaseSubjectContext(&SubjectContext);
                            if ( !v251 )
                              Acl = AccessStatus;
                          }
                        }
                      }
                    }
                  }
                }
                ExFreePoolWithTag(v246, 0x20534C53u);
                if ( Acl < 0 )
                  goto LABEL_525;
                ReturnLength = 0;
                SystemInformation = 8LL;
                Acl = 0;
                ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
                if ( *((_DWORD *)v935 + 4) != 160 )
                  goto LABEL_556;
                if ( !memcmp(qword_1406ECE90, *((const void **)v935 + 3), 0xA0uLL)
                  && *((_DWORD *)v126 + 4) == 160
                  && !memcmp(qword_1406ED4D0, *((const void **)v126 + 3), 0xA0uLL)
                  && *((_DWORD *)v935 + 8) == 8
                  && **((_QWORD **)v935 + 5) == 0xA564595855B292C4uLL
                  && *((_DWORD *)v126 + 8) == 8
                  && **((_QWORD **)v126 + 5) == 0x1B732BD76B4D09FCLL )
                {
                  goto LABEL_558;
                }
                if ( memcmp(qword_1406ED250, *((const void **)v935 + 3), 0xA0uLL)
                  || *((_DWORD *)v126 + 4) != 160
                  || memcmp(qword_1406ECC10, *((const void **)v126 + 3), 0xA0uLL)
                  || *((_DWORD *)v935 + 8) != 8
                  || **((_QWORD **)v935 + 5) != 0x93278D843BBDC445uLL
                  || *((_DWORD *)v126 + 8) != 8
                  || **((_QWORD **)v126 + 5) != 0x6223E824AB21D998LL )
                {
LABEL_556:
                  Acl = -2147024891;
                }
                if ( Acl >= 0 )
                {
LABEL_558:
                  Acl = 0;
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                    Acl = -2147024891;
                }
LABEL_525:
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1020 = 0;
                v247 = RtlUIntAdd(4u, 4u, &v1169);
                v248 = v916;
                Acl = v247;
                if ( v247 >= 0 )
                  v248 = v1169;
                v916 = v248;
                if ( v247 < 0 )
                {
                  v250 = v916;
                }
                else
                {
                  v249 = RtlUIntAdd(0, v248, &v1020);
                  v250 = v916;
                  Acl = v249;
                  if ( v249 >= 0 )
                    v250 = v1020;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1021 = 8;
                Acl = RtlUIntAdd(8u, v250, &v1021);
                if ( Acl < 0 )
                  goto LABEL_579;
                v252 = (v1021 + 7) & 0xFFFFFFF8;
                if ( v252 >= v1021 )
                {
                  v1022 = (v1021 + 7) & 0xFFFFFFF8;
                  v254 = RtlUIntAdd(v252, 8u, &v1022);
                  v253 = v916;
                  Acl = v254;
                  if ( v254 >= 0 )
                    v253 = v1022;
                }
                else
                {
                  v253 = v916;
                  Acl = -1073741675;
                }
                if ( Acl < 0 )
                {
LABEL_579:
                  v257 = v916;
                }
                else
                {
                  v905 = 4;
                  Acl = RtlUIntAdd(4u, v253, &v905);
                  if ( Acl < 0
                    || (Acl = RtlUIntAdd(v905, v255, &v905), Acl < 0)
                    || (Acl = RtlUIntAdd(v905, *((_DWORD *)v126 + 4), &v905), Acl < 0)
                    || (Acl = RtlUIntAdd(v905, 4u, &v905), Acl < 0) )
                  {
                    v257 = v916;
                  }
                  else
                  {
                    v256 = RtlUIntAdd(v905, *((_DWORD *)v126 + 8), &v905);
                    v257 = v916;
                    Acl = v256;
                    v258 = v1023;
                    if ( Acl >= 0 )
                      v258 = v905;
                    v1023 = v258;
                    if ( Acl >= 0 )
                      v257 = v258;
                  }
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v914 < v257 )
                {
                  v1024 = 0;
                  if ( &v1024 )
                  {
                    if ( *(_QWORD *)&uAugend[1] )
                    {
                      v261 = *(UINT **)&uAugend[1];
                      v1196 = *(_QWORD *)&uAugend[1];
                      if ( v894 )
                      {
                        while ( 1 )
                        {
                          v262 = RtlUIntAdd(4u, *v261, &v1171);
                          Acl = v262;
                          if ( v262 >= 0 )
                            v263 = v1171;
                          v951 = v263;
                          if ( v262 < 0 )
                            break;
                          Acl = RtlULongLongAdd(v264, v263, &v1196);
                          if ( Acl < 0 )
                            break;
                          v261 = (UINT *)v1196;
                          if ( v265 + 1 >= v894 )
                            goto LABEL_595;
                        }
                      }
                      else
                      {
LABEL_595:
                        Acl = RtlULongLongAdd((ULONGLONG)v261, 4uLL, v1321);
                        if ( Acl >= 0 )
                        {
                          if ( (unsigned __int64)(v267 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                          {
                            Acl = -1073741789;
                            goto LABEL_611;
                          }
                          v268 = (_DWORD *)v1321[0];
                          *v267 = v266;
                          *v268 = v1024;
                          ++v894;
                        }
                      }
                    }
                    else
                    {
                      v259 = RtlUIntAdd(4u, 4u, &v1170);
                      v260 = v951;
                      Acl = v259;
                      if ( v259 >= 0 )
                        v260 = v1170;
                      v951 = v260;
                      if ( v259 >= 0 )
                      {
                        Acl = RtlUIntAdd(uAugend[0], v260, uAugend);
                        if ( Acl >= 0 )
                        {
                          ++v894;
LABEL_601:
                          if ( uAugend[0] )
                          {
                            v269 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
                            if ( v269 )
                            {
                              *(_QWORD *)&uAugend[1] = v269;
                              v894 = 0;
                              v1025 = 0;
                              if ( &v1025 )
                              {
                                Acl = RtlULongLongAdd((ULONGLONG)v269, 4uLL, v1322);
                                if ( Acl >= 0 )
                                {
                                  if ( v271 + 2 <= (_DWORD *)((char *)v271 + uAugend[0]) )
                                  {
                                    v272 = (_DWORD *)v1322[0];
                                    *v271 = v270;
                                    *v272 = v1025;
                                    ++v894;
                                  }
                                  else
                                  {
                                    Acl = -1073741789;
                                  }
                                }
                              }
                              else
                              {
                                Acl = -1073741811;
                              }
                            }
                            else
                            {
                              Acl = -1073741801;
                            }
                          }
                          else
                          {
                            Acl = -1073741762;
                          }
LABEL_611:
                          if ( Acl >= 0 )
                            goto LABEL_733;
                          goto LABEL_729;
                        }
                      }
                    }
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                  if ( Acl < 0 )
                    goto LABEL_2144;
                  goto LABEL_601;
                }
                v273 = v897[0];
                if ( v897[1] )
                {
                  if ( LODWORD(v897[0]) > 3 )
                  {
                    v274 = v897[1];
                    v993 = v897[1];
                    do
                    {
                      Acl = RtlULongLongAdd(v274, 4uLL, &v993);
                      if ( Acl < 0 )
                        goto LABEL_625;
                      Acl = RtlULongLongAdd(v993, v275, &v993);
                      if ( Acl < 0 )
                        goto LABEL_625;
                      v274 = v993;
                    }
                    while ( (unsigned int)(v276 + 1) < 3 );
                    Acl = RtlULongLongAdd(v993, 4uLL, &v993);
                    if ( Acl < 0 )
                    {
LABEL_625:
                      v277 = v1172;
                      v278 = v1264;
                      goto LABEL_626;
                    }
                    v278 = (_QWORD *)v993;
                    v1172 = v277;
                    if ( !v277 )
                      v278 = 0LL;
                    v1264 = v278;
LABEL_626:
                    if ( Acl < 0 )
                      goto LABEL_2144;
                    if ( v277 != 8 )
                    {
                      Acl = -1073741789;
                      goto LABEL_729;
                    }
                    v1265 = *v278;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v1265 && qword_140747238 )
                {
                  if ( v1265 != qword_140747238 )
                  {
                    v1026 = -1073425151;
                    if ( &v1026 )
                    {
                      if ( *(_QWORD *)&uAugend[1] )
                      {
                        v281 = *(UINT **)&uAugend[1];
                        v1197 = *(_QWORD *)&uAugend[1];
                        if ( v894 )
                        {
                          while ( 1 )
                          {
                            v282 = RtlUIntAdd(4u, *v281, &v1174);
                            Acl = v282;
                            if ( v282 >= 0 )
                              v283 = v1174;
                            v952 = v283;
                            if ( v282 < 0 )
                              break;
                            Acl = RtlULongLongAdd(v284, v283, &v1197);
                            if ( Acl < 0 )
                              break;
                            v281 = (UINT *)v1197;
                            if ( v285 + 1 >= v894 )
                              goto LABEL_647;
                          }
                        }
                        else
                        {
LABEL_647:
                          Acl = RtlULongLongAdd((ULONGLONG)v281, 4uLL, v1323);
                          if ( Acl >= 0 )
                          {
                            if ( (unsigned __int64)(v287 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                            {
                              Acl = -1073741789;
                              goto LABEL_729;
                            }
                            v288 = (int *)v1323[0];
                            *v287 = v286;
                            *v288 = v1026;
                            ++v894;
                          }
                        }
                      }
                      else
                      {
                        v279 = RtlUIntAdd(4u, 4u, &v1173);
                        v280 = v952;
                        Acl = v279;
                        if ( v279 >= 0 )
                          v280 = v1173;
                        v952 = v280;
                        if ( v279 >= 0 )
                        {
                          Acl = RtlUIntAdd(uAugend[0], v280, uAugend);
                          if ( Acl >= 0 )
                          {
                            ++v894;
                            goto LABEL_653;
                          }
                        }
                      }
                    }
                    else
                    {
                      Acl = -1073741811;
                    }
                    if ( Acl < 0 )
                      goto LABEL_2144;
LABEL_653:
                    if ( !uAugend[0] )
                    {
                      Acl = -1073741762;
                      goto LABEL_729;
                    }
                    v289 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
                    if ( !v289 )
                    {
                      Acl = -1073741801;
                      goto LABEL_729;
                    }
                    *(_QWORD *)&uAugend[1] = v289;
                    v894 = 0;
                    v1080 = -1073425151;
                    if ( &v1080 )
                    {
                      Acl = RtlULongLongAdd((ULONGLONG)v289, 4uLL, v1324);
                      if ( Acl >= 0 )
                      {
                        if ( v291 + 2 <= (_DWORD *)((char *)v291 + uAugend[0]) )
                        {
                          v292 = (int *)v1324[0];
                          *v291 = v290;
                          *v292 = v1080;
                          ++v894;
                        }
                        else
                        {
                          Acl = -1073741789;
                        }
                      }
                      goto LABEL_729;
                    }
                    goto LABEL_728;
                  }
                  if ( !v897[1] || v273 <= 4 )
                    goto LABEL_728;
                  v293 = v897[1];
                  v994 = v897[1];
                  do
                  {
                    Acl = RtlULongLongAdd(v293, 4uLL, &v994);
                    if ( Acl < 0 )
                      goto LABEL_672;
                    Acl = RtlULongLongAdd(v994, v294, &v994);
                    if ( Acl < 0 )
                      goto LABEL_672;
                    v293 = v994;
                  }
                  while ( (unsigned int)(v295 + 1) < 4 );
                  Acl = RtlULongLongAdd(v994, 4uLL, &v994);
                  if ( Acl < 0 )
                  {
LABEL_672:
                    v296 = v1175;
                    goto LABEL_673;
                  }
                  v297 = v994;
                  v1175 = v296;
                  if ( !v296 )
                    v297 = 0LL;
                  v1266 = v297;
LABEL_673:
                  if ( Acl < 0 )
                    goto LABEL_2144;
                  v298 = qword_140747438(v296);
                  if ( v298 == 263 )
                  {
                    v299 = 1074058754;
                  }
                  else if ( v298 == 0x40000000 )
                  {
                    v299 = 1074058753;
                  }
                  else if ( v298 >= 0 )
                  {
                    v299 = 0;
                  }
                  else
                  {
                    v299 = v298 | 0x10000000;
                  }
                  uAugend[0] = 0;
                  v894 = 0;
                  if ( *(_QWORD *)&uAugend[1] )
                  {
                    ExFreePoolWithTag(*(PVOID *)&uAugend[1], 0x20534C53u);
                    *(_QWORD *)&uAugend[1] = 0LL;
                  }
                  v1079 = v299;
                  if ( &v1079 )
                  {
                    v300 = RtlUIntAdd(4u, 4u, &v1177);
                    v301 = v953;
                    Acl = v300;
                    if ( v300 >= 0 )
                      v301 = v1177;
                    v953 = v301;
                    if ( v300 >= 0 )
                    {
                      Acl = RtlUIntAdd(uAugend[0], v301, uAugend);
                      if ( Acl >= 0 )
                      {
                        ++v894;
                        goto LABEL_691;
                      }
                    }
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                  if ( Acl < 0 )
                    goto LABEL_2144;
LABEL_691:
                  if ( !uAugend[0] )
                  {
                    Acl = -1073741762;
                    goto LABEL_729;
                  }
                  v302 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
                  if ( !v302 )
                  {
                    Acl = -1073741801;
                    goto LABEL_729;
                  }
                  *(_QWORD *)&uAugend[1] = v302;
                  v894 = 0;
                  v1076 = v299;
                  if ( &v1076 )
                  {
                    Acl = RtlULongLongAdd((ULONGLONG)v302, 4uLL, v1325);
                    if ( Acl >= 0 )
                    {
                      if ( v304 + 2 <= (_DWORD *)((char *)v304 + uAugend[0]) )
                      {
                        v305 = (int *)v1325[0];
                        *v304 = v303;
                        *v305 = v1076;
                        ++v894;
                      }
                      else
                      {
                        Acl = -1073741789;
                      }
                    }
                    goto LABEL_729;
                  }
                  goto LABEL_728;
                }
                v1075 = -1073425151;
                if ( &v1075 )
                {
                  if ( *(_QWORD *)&uAugend[1] )
                  {
                    v308 = *(UINT **)&uAugend[1];
                    v1198 = *(_QWORD *)&uAugend[1];
                    if ( v894 )
                    {
                      while ( 1 )
                      {
                        v309 = RtlUIntAdd(4u, *v308, &v1179);
                        Acl = v309;
                        if ( v309 >= 0 )
                          v310 = v1179;
                        v954 = v310;
                        if ( v309 < 0 )
                          break;
                        Acl = RtlULongLongAdd(v311, v310, &v1198);
                        if ( Acl < 0 )
                          break;
                        v308 = (UINT *)v1198;
                        if ( v312 + 1 >= v894 )
                          goto LABEL_713;
                      }
                    }
                    else
                    {
LABEL_713:
                      Acl = RtlULongLongAdd((ULONGLONG)v308, 4uLL, v1326);
                      if ( Acl >= 0 )
                      {
                        if ( (unsigned __int64)(v314 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                        {
                          Acl = -1073741789;
                          goto LABEL_729;
                        }
                        v315 = (int *)v1326[0];
                        *v314 = v313;
                        *v315 = v1075;
                        ++v894;
                      }
                    }
                  }
                  else
                  {
                    v306 = RtlUIntAdd(4u, 4u, &v1178);
                    v307 = v954;
                    Acl = v306;
                    if ( v306 >= 0 )
                      v307 = v1178;
                    v954 = v307;
                    if ( v306 >= 0 )
                    {
                      Acl = RtlUIntAdd(uAugend[0], v307, uAugend);
                      if ( Acl >= 0 )
                      {
                        ++v894;
                        goto LABEL_719;
                      }
                    }
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
LABEL_719:
                if ( !uAugend[0] )
                {
                  Acl = -1073741762;
                  goto LABEL_729;
                }
                v316 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
                if ( !v316 )
                {
                  Acl = -1073741801;
                  goto LABEL_729;
                }
                *(_QWORD *)&uAugend[1] = v316;
                v894 = 0;
                v1074 = -1073425151;
                if ( &v1074 )
                {
                  Acl = RtlULongLongAdd((ULONGLONG)v316, 4uLL, &v1327);
                  if ( Acl >= 0 )
                  {
                    if ( v318 + 2 <= (_DWORD *)((char *)v318 + uAugend[0]) )
                    {
                      v319 = (_DWORD *)v1327;
                      *v318 = v317;
                      *v319 = v1074;
                      ++v894;
                    }
                    else
                    {
                      Acl = -1073741789;
                    }
                  }
                  goto LABEL_729;
                }
                goto LABEL_728;
              case 2:
                v931 = 0;
                v615 = RtlUIntAdd(4u, 4u, &v1117);
                v616 = v1035;
                Acl = v615;
                if ( v615 >= 0 )
                  v616 = v1117;
                v1035 = v616;
                if ( v615 < 0 )
                  goto LABEL_1553;
                Acl = RtlUIntAdd(0, v616, &v931);
                if ( Acl < 0 )
                  goto LABEL_1553;
                v618 = RtlUIntAdd(v617 + 4, v617 + 8, &v915);
                Acl = v618;
                if ( v618 >= 0 )
                  v619 = v915;
                v1035 = v619;
                if ( v618 < 0 )
                {
LABEL_1553:
                  v621 = v915;
                }
                else
                {
                  v620 = RtlUIntAdd(v931, v619, &v931);
                  v621 = v915;
                  Acl = v620;
                  if ( v620 >= 0 )
                    v621 = v931;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1036 = 8;
                Acl = RtlUIntAdd(8u, v621, &v1036);
                if ( Acl < 0 )
                  goto LABEL_1571;
                v623 = (v1036 + 7) & 0xFFFFFFF8;
                if ( v623 >= v1036 )
                {
                  v1037 = (v1036 + 7) & 0xFFFFFFF8;
                  v625 = RtlUIntAdd(v623, 8u, &v1037);
                  v624 = v915;
                  Acl = v625;
                  if ( v625 >= 0 )
                    v624 = v1037;
                }
                else
                {
                  v624 = v915;
                  Acl = -1073741675;
                }
                if ( Acl < 0 )
                {
LABEL_1571:
                  v628 = v915;
                }
                else
                {
                  v909 = 4;
                  Acl = RtlUIntAdd(4u, v624, &v909);
                  if ( Acl < 0
                    || (Acl = RtlUIntAdd(v909, v626, &v909), Acl < 0)
                    || (Acl = RtlUIntAdd(v909, *((_DWORD *)v126 + 4), &v909), Acl < 0)
                    || (Acl = RtlUIntAdd(v909, 4u, &v909), Acl < 0) )
                  {
                    v628 = v915;
                  }
                  else
                  {
                    v627 = RtlUIntAdd(v909, *((_DWORD *)v126 + 8), &v909);
                    v628 = v915;
                    Acl = v627;
                    v629 = v1038;
                    if ( Acl >= 0 )
                      v629 = v909;
                    v1038 = v629;
                    if ( Acl >= 0 )
                      v628 = v629;
                  }
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v914 < v628 )
                {
                  v1246 = 0LL;
                }
                else
                {
                  v1246 = __rdtsc();
                  qword_140747238 = v1246;
                }
                uAugend[0] = v622;
                if ( !v622 )
                {
                  Acl = -1073741762;
                  goto LABEL_1605;
                }
                v630 = ExAllocatePoolWithTag(PagedPool, v622, 0x20534C53u);
                if ( !v630 )
                {
                  Acl = -1073741801;
                  goto LABEL_1605;
                }
                v631 = 0;
                *(_QWORD *)&uAugend[1] = v630;
                v894 = 0;
                v1039 = 0;
                if ( &v1039 )
                {
                  Acl = RtlULongLongAdd((ULONGLONG)v630, 4uLL, v1344);
                  if ( Acl >= 0 )
                  {
                    if ( v633 + 2 > (_DWORD *)((char *)v633 + uAugend[0]) )
                    {
                      Acl = -1073741789;
                      goto LABEL_1605;
                    }
                    v634 = (_DWORD *)v1344[0];
                    *v633 = v632;
                    *v634 = v1039;
                    v631 = ++v894;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1247 = v1246;
                if ( !&v1247 )
                {
                  Acl = -1073741811;
                  goto LABEL_1605;
                }
                if ( !*(_QWORD *)&uAugend[1] )
                {
                  v635 = RtlUIntAdd(4u, 8u, &v1118);
                  v636 = v967;
                  Acl = v635;
                  if ( v635 >= 0 )
                    v636 = v1118;
                  v967 = v636;
                  if ( v635 >= 0 )
                  {
                    Acl = RtlUIntAdd(uAugend[0], v636, uAugend);
                    if ( Acl >= 0 )
                    {
                      ++v894;
                      Acl = 0;
                    }
                  }
                  goto LABEL_1605;
                }
                v637 = *(UINT **)&uAugend[1];
                v1209 = *(_QWORD *)&uAugend[1];
                if ( !v631 )
                  goto LABEL_1600;
                while ( 1 )
                {
                  v638 = RtlUIntAdd(4u, *v637, &v1119);
                  Acl = v638;
                  if ( v638 >= 0 )
                    v639 = v1119;
                  v967 = v639;
                  if ( v638 < 0 )
                    break;
                  Acl = RtlULongLongAdd(v640, v639, &v1209);
                  if ( Acl < 0 )
                    break;
                  v637 = (UINT *)v1209;
                  if ( v641 + 1 >= v631 )
                  {
LABEL_1600:
                    Acl = RtlULongLongAdd((ULONGLONG)v637, 4uLL, v1345);
                    if ( Acl >= 0 )
                    {
                      if ( (unsigned __int64)(v642 + 3) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                      {
                        v643 = (unsigned __int64 *)v1345[0];
                        *v642 = 8;
                        *v643 = v1247;
                        ++v894;
                      }
                      else
                      {
                        Acl = -1073741789;
                      }
                    }
                    break;
                  }
                }
LABEL_1605:
                if ( Acl < 0 )
                  goto LABEL_2144;
                goto LABEL_733;
              case 4:
                v320 = sub_1406BC338(v897, v126, v125, &v894);
                goto LABEL_732;
              case 5:
                if ( !v126 )
                  goto LABEL_2143;
                if ( !v897[1] )
                {
                  Acl = -1073741811;
                  goto LABEL_754;
                }
                if ( LODWORD(v897[0]) <= 3 )
                {
                  Acl = -1073741811;
                  goto LABEL_754;
                }
                v322 = v897[1];
                v995 = v897[1];
                do
                {
                  Acl = RtlULongLongAdd(v322, 4uLL, &v995);
                  if ( Acl < 0 )
                    goto LABEL_749;
                  Acl = RtlULongLongAdd(v995, v323, &v995);
                  if ( Acl < 0 )
                    goto LABEL_749;
                  v322 = v995;
                }
                while ( (unsigned int)(v324 + 1) < 3 );
                Acl = RtlULongLongAdd(v995, 4uLL, &v995);
                if ( Acl < 0 )
                {
LABEL_749:
                  v325 = v1180;
                  v326 = v1267;
                  goto LABEL_750;
                }
                v326 = (_QWORD *)v995;
                v1180 = v325;
                if ( !v325 )
                  v326 = 0LL;
                v1267 = v326;
LABEL_750:
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v325 != 8 )
                {
                  Acl = -1073741789;
                  goto LABEL_729;
                }
                v1268 = *v326;
LABEL_754:
                if ( Acl < 0 )
                  goto LABEL_2144;
                v327 = 1;
                RtlInitUnicodeString(&v1328, L"Security-SPP-GenuineLocalStatus");
                v328 = qword_140747440(&v1328, &v1181, &v1182, 4LL, v1287);
                Acl = v328;
                if ( v328 == -1073741772 )
                {
                  v1183 = 0;
                }
                else
                {
                  if ( v328 >= 0 && (v1181 != 4 || !v1182) )
                    v327 = 0;
                  v1183 = v327;
                  if ( v328 < 0 )
                    goto LABEL_729;
                  if ( v327 )
                    KeResetEvent(&stru_1402FA8E0);
                }
                dword_1407471D0 = 1;
                do
                {
                  v329 = KeWaitForSingleObject(&stru_1402FA8E0, UserRequest, 1, 1u, 0LL);
                  v330 = v329;
                }
                while ( v329 == 257 );
                if ( v329 >= 0 && v329 != 192 )
                {
                  do
                  {
                    v331 = KeWaitForSingleObject(&stru_1402FA900, UserRequest, 1, 1u, 0LL);
                    v330 = v331;
                  }
                  while ( v331 == 257 );
                  if ( v331 >= 0 && v331 != 192 && v331 != 258 )
                    KeReleaseMutex(&stru_1402FA900, 0);
                }
                v902 = 0;
                v332 = RtlUIntAdd(4u, 4u, &v1184);
                v333 = v955;
                Acl = v332;
                if ( v332 >= 0 )
                  v333 = v1184;
                v955 = v333;
                if ( v332 < 0 )
                  goto LABEL_787;
                Acl = RtlUIntAdd(0, v333, &v902);
                if ( Acl < 0 )
                  goto LABEL_787;
                v335 = RtlUIntAdd(v334 + 4, v334 + 8, &v1185);
                Acl = v335;
                if ( v335 >= 0 )
                  v336 = v1185;
                v955 = v336;
                if ( v335 < 0 )
                  goto LABEL_787;
                Acl = RtlUIntAdd(v902, v336, &v902);
                if ( Acl < 0 )
                  goto LABEL_787;
                v337 = RtlUIntAdd(4u, 4u, &v924);
                Acl = v337;
                if ( v337 >= 0 )
                  v338 = v924;
                v955 = v338;
                if ( v337 < 0 )
                {
LABEL_787:
                  v340 = v924;
                }
                else
                {
                  v339 = RtlUIntAdd(v902, v338, &v902);
                  v340 = v924;
                  Acl = v339;
                  if ( v339 >= 0 )
                    v340 = v902;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1071 = 8;
                Acl = RtlUIntAdd(8u, v340, &v1071);
                if ( Acl >= 0 )
                {
                  v342 = (v1071 + 7) & 0xFFFFFFF8;
                  if ( v342 >= v1071 )
                  {
                    v1069 = (v1071 + 7) & 0xFFFFFFF8;
                    v344 = RtlUIntAdd(v342, 8u, &v1069);
                    v343 = v924;
                    Acl = v344;
                    if ( v344 >= 0 )
                      v343 = v1069;
                  }
                  else
                  {
                    v343 = v924;
                    Acl = -1073741675;
                  }
                  if ( Acl < 0 )
                    goto LABEL_2144;
                  v906 = 4;
                  Acl = RtlUIntAdd(4u, v343, &v906);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlUIntAdd(v906, v345, &v906);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlUIntAdd(v906, *((_DWORD *)v126 + 4), &v906);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlUIntAdd(v906, 4u, &v906);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlUIntAdd(v906, *((_DWORD *)v126 + 8), &v906);
                          v346 = v1186;
                          if ( Acl >= 0 )
                            v346 = v906;
                          v1186 = v346;
                        }
                      }
                    }
                  }
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                uAugend[0] = v341;
                if ( !v341 )
                {
                  Acl = -1073741762;
                  goto LABEL_729;
                }
                v347 = ExAllocatePoolWithTag(PagedPool, v341, 0x20534C53u);
                if ( !v347 )
                {
                  Acl = -1073741801;
                  goto LABEL_729;
                }
                *(_QWORD *)&uAugend[1] = v347;
                v348 = 0;
                v894 = 0;
                v1068 = v330 | 0x10000000;
                if ( &v1068 )
                {
                  Acl = RtlULongLongAdd((ULONGLONG)v347, 4uLL, v1329);
                  if ( Acl >= 0 )
                  {
                    if ( v350 + 2 > (_DWORD *)((char *)v350 + uAugend[0]) )
                    {
                      Acl = -1073741789;
                      goto LABEL_729;
                    }
                    v351 = (int *)v1329[0];
                    *v350 = v349;
                    *v351 = v1068;
                    v348 = ++v894;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1234 = v1268;
                if ( &v1234 )
                {
                  if ( *(_QWORD *)&uAugend[1] )
                  {
                    v355 = *(UINT **)&uAugend[1];
                    v356 = 0;
                    v1199 = *(_QWORD *)&uAugend[1];
                    if ( v348 )
                    {
                      while ( 1 )
                      {
                        v357 = RtlUIntAdd(4u, *v355, &v1188);
                        Acl = v357;
                        if ( v357 >= 0 )
                          v358 = v1188;
                        v956 = v358;
                        if ( v357 < 0 )
                          break;
                        Acl = RtlULongLongAdd(v359, v358, &v1199);
                        if ( Acl < 0 )
                          break;
                        v355 = (UINT *)v1199;
                        if ( ++v356 >= v348 )
                          goto LABEL_827;
                      }
                    }
                    else
                    {
LABEL_827:
                      Acl = RtlULongLongAdd((ULONGLONG)v355, 4uLL, v1330);
                      if ( Acl >= 0 )
                      {
                        if ( (unsigned __int64)(v360 + 3) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                        {
                          Acl = -1073741789;
                          goto LABEL_729;
                        }
                        v361 = (_QWORD *)v1330[0];
                        *v360 = 8;
                        *v361 = v1234;
                        v348 = ++v894;
                      }
                    }
                  }
                  else
                  {
                    v352 = RtlUIntAdd(4u, 8u, &v1187);
                    v353 = v956;
                    Acl = v352;
                    if ( v352 >= 0 )
                      v353 = v1187;
                    v956 = v353;
                    if ( v352 >= 0 )
                    {
                      v354 = RtlUIntAdd(uAugend[0], v353, uAugend);
                      v348 = v894;
                      Acl = v354;
                      if ( v354 >= 0 )
                      {
                        v348 = ++v894;
                        goto LABEL_833;
                      }
                    }
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
LABEL_833:
                v1060 = dword_140747064;
                if ( !&v1060 )
                  goto LABEL_728;
                if ( *(_QWORD *)&uAugend[1] )
                {
                  v364 = *(UINT **)&uAugend[1];
                  v365 = 0;
                  v1200 = *(_QWORD *)&uAugend[1];
                  if ( v348 )
                  {
                    while ( 1 )
                    {
                      v366 = RtlUIntAdd(4u, *v364, &v1210);
                      Acl = v366;
                      if ( v366 >= 0 )
                        v367 = v1210;
                      v957 = v367;
                      if ( v366 < 0 )
                        break;
                      Acl = RtlULongLongAdd(v368, v367, &v1200);
                      if ( Acl < 0 )
                        break;
                      v364 = (UINT *)v1200;
                      if ( ++v365 >= v369 )
                        goto LABEL_846;
                    }
                  }
                  else
                  {
LABEL_846:
                    Acl = RtlULongLongAdd((ULONGLONG)v364, 4uLL, v1331);
                    if ( Acl >= 0 )
                    {
                      if ( (unsigned __int64)(v371 + 2) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                      {
                        v372 = (int *)v1331[0];
                        *v371 = v370;
                        *v372 = v1060;
                        ++v894;
                      }
                      else
                      {
                        Acl = -1073741789;
                      }
                    }
                  }
                }
                else
                {
                  v362 = RtlUIntAdd(4u, 4u, &v1189);
                  v363 = v957;
                  Acl = v362;
                  if ( v362 >= 0 )
                    v363 = v1189;
                  v957 = v363;
                  if ( v362 >= 0 )
                  {
                    Acl = RtlUIntAdd(uAugend[0], v363, uAugend);
                    if ( Acl >= 0 )
                    {
                      ++v894;
                      Acl = 0;
                    }
                  }
                }
                goto LABEL_729;
              case 6:
                if ( !v126 )
                  goto LABEL_2143;
                if ( !v897[1] )
                {
                  Acl = -1073741811;
                  goto LABEL_868;
                }
                if ( LODWORD(v897[0]) <= 3 )
                {
                  Acl = -1073741811;
                  goto LABEL_868;
                }
                v373 = v897[1];
                v996 = v897[1];
                do
                {
                  Acl = RtlULongLongAdd(v373, 4uLL, &v996);
                  if ( Acl < 0 )
                    goto LABEL_863;
                  Acl = RtlULongLongAdd(v996, v374, &v996);
                  if ( Acl < 0 )
                    goto LABEL_863;
                  v373 = v996;
                }
                while ( (unsigned int)(v375 + 1) < 3 );
                Acl = RtlULongLongAdd(v996, 4uLL, &v996);
                if ( Acl < 0 )
                {
LABEL_863:
                  v376 = v1130;
                  v377 = v1269;
                  goto LABEL_864;
                }
                v377 = (_QWORD *)v996;
                v1130 = v376;
                if ( !v376 )
                  v377 = 0LL;
                v1269 = v377;
LABEL_864:
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v376 != 8 )
                {
                  Acl = -1073741789;
                  goto LABEL_729;
                }
                v1270 = *v377;
LABEL_868:
                if ( Acl < 0 )
                  goto LABEL_2144;
                Interval.QuadPart = -35000000LL;
                do
                {
                  v378 = KeDelayExecutionThread(1, 1u, &Interval);
                  v379 = v378;
                }
                while ( v378 == 257 );
                if ( v378 >= 0 && v378 != 192 )
                {
                  Interval.QuadPart = -270000000LL;
                  do
                  {
                    v380 = KeWaitForSingleObject(&stru_1402FA900, UserRequest, 1, 1u, &Interval);
                    v379 = v380;
                  }
                  while ( v380 == 257 );
                  if ( v380 >= 0 && v380 != 192 && v380 != 258 )
                    KeReleaseMutex(&stru_1402FA900, 0);
                }
                v381 = RtlUIntAdd(4u, 4u, &v1211);
                v383 = v1059;
                Acl = v381;
                if ( v381 >= 0 )
                  v383 = v1211;
                v1059 = v383;
                if ( v381 < 0 )
                  goto LABEL_888;
                v1058 = v383;
                v384 = RtlUIntAdd(v382, 8u, &v925);
                v386 = v385;
                Acl = v384;
                if ( v384 >= 0 )
                  v386 = v925;
                v1059 = v386;
                if ( v384 < 0 )
                {
LABEL_888:
                  v388 = v925;
                }
                else
                {
                  v387 = RtlUIntAdd(v385, v386, &v1058);
                  v388 = v925;
                  Acl = v387;
                  if ( v387 >= 0 )
                    v388 = v1058;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1057 = 8;
                Acl = RtlUIntAdd(8u, v388, &v1057);
                if ( Acl < 0 )
                  goto LABEL_903;
                v390 = (v1057 + 7) & 0xFFFFFFF8;
                if ( v390 >= v1057 )
                {
                  v1049 = (v1057 + 7) & 0xFFFFFFF8;
                  v392 = RtlUIntAdd(v390, 8u, &v1049);
                  v391 = v925;
                  Acl = v392;
                  if ( v392 >= 0 )
                    v391 = v1049;
                }
                else
                {
                  v391 = v925;
                  Acl = -1073741675;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                v907 = 4;
                Acl = RtlUIntAdd(4u, v391, &v907);
                if ( Acl >= 0 )
                {
                  Acl = RtlUIntAdd(v907, v393, &v907);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlUIntAdd(v907, *((_DWORD *)v126 + 4), &v907);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlUIntAdd(v907, 4u, &v907);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlUIntAdd(v907, *((_DWORD *)v126 + 8), &v907);
                        v394 = v1212;
                        if ( Acl >= 0 )
                          v394 = v907;
                        v1212 = v394;
                      }
                    }
                  }
                }
LABEL_903:
                if ( Acl < 0 )
                  goto LABEL_2144;
                uAugend[0] = v389;
                if ( !v389 )
                {
                  Acl = -1073741762;
                  goto LABEL_729;
                }
                v395 = ExAllocatePoolWithTag(PagedPool, v389, 0x20534C53u);
                if ( !v395 )
                {
                  Acl = -1073741801;
                  goto LABEL_729;
                }
                *(_QWORD *)&uAugend[1] = v395;
                v396 = 0;
                v894 = 0;
                v1067 = v379 | 0x10000000;
                if ( &v1067 )
                {
                  Acl = RtlULongLongAdd((ULONGLONG)v395, 4uLL, v1332);
                  if ( Acl >= 0 )
                  {
                    if ( v398 + 2 > (_DWORD *)((char *)v398 + uAugend[0]) )
                    {
                      Acl = -1073741789;
                      goto LABEL_729;
                    }
                    v399 = (int *)v1332[0];
                    *v398 = v397;
                    *v399 = v1067;
                    v396 = ++v894;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1235 = v1270;
                if ( !&v1235 )
                  goto LABEL_728;
                if ( *(_QWORD *)&uAugend[1] )
                {
                  v402 = *(UINT **)&uAugend[1];
                  v1202 = *(_QWORD *)&uAugend[1];
                  if ( v396 )
                  {
                    while ( 1 )
                    {
                      v403 = RtlUIntAdd(4u, *v402, &v1214);
                      Acl = v403;
                      if ( v403 >= 0 )
                        v404 = v1214;
                      v958 = v404;
                      if ( v403 < 0 )
                        break;
                      Acl = RtlULongLongAdd(v405, v404, &v1202);
                      if ( Acl < 0 )
                        break;
                      v402 = (UINT *)v1202;
                      if ( v406 + 1 >= v396 )
                        goto LABEL_928;
                    }
                  }
                  else
                  {
LABEL_928:
                    Acl = RtlULongLongAdd((ULONGLONG)v402, 4uLL, v1333);
                    if ( Acl >= 0 )
                    {
                      if ( (unsigned __int64)(v407 + 3) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                      {
                        v408 = (_QWORD *)v1333[0];
                        *v407 = 8;
                        *v408 = v1235;
                        ++v894;
                      }
                      else
                      {
                        Acl = -1073741789;
                      }
                    }
                  }
                }
                else
                {
                  v400 = RtlUIntAdd(4u, 8u, &v1213);
                  v401 = v958;
                  Acl = v400;
                  if ( v400 >= 0 )
                    v401 = v1213;
                  v958 = v401;
                  if ( v400 >= 0 )
                  {
                    Acl = RtlUIntAdd(uAugend[0], v401, uAugend);
                    if ( Acl >= 0 )
                    {
                      ++v894;
                      Acl = 0;
                    }
                  }
                }
                goto LABEL_729;
              case 7:
                v1203.QuadPart = 0LL;
                if ( !v126 )
                {
                  Acl = -1073741811;
                  v5 = 0LL;
                  goto LABEL_2145;
                }
                if ( !v897[1] )
                {
                  Acl = -1073741811;
                  goto LABEL_951;
                }
                if ( LODWORD(v897[0]) <= 3 )
                {
                  Acl = -1073741811;
                  goto LABEL_951;
                }
                v409 = v897[1];
                v997 = v897[1];
                do
                {
                  Acl = RtlULongLongAdd(v409, 4uLL, &v997);
                  if ( Acl < 0 )
                    goto LABEL_946;
                  Acl = RtlULongLongAdd(v997, v410, &v997);
                  if ( Acl < 0 )
                    goto LABEL_946;
                  v409 = v997;
                }
                while ( (unsigned int)(v411 + 1) < 3 );
                Acl = RtlULongLongAdd(v997, 4uLL, &v997);
                if ( Acl < 0 )
                {
LABEL_946:
                  v412 = v1216;
                  v413 = v1271;
                  goto LABEL_947;
                }
                v413 = (_QWORD *)v997;
                v1216 = v412;
                if ( !v412 )
                  v413 = 0LL;
                v1271 = v413;
LABEL_947:
                if ( Acl < 0 )
                  goto LABEL_182;
                if ( v412 != 8 )
                {
                  Acl = -1073741789;
                  goto LABEL_1013;
                }
                v1272 = *v413;
LABEL_951:
                if ( Acl < 0 )
                  goto LABEL_182;
                v1203.QuadPart = -270000000LL;
                v414 = KeWaitForSingleObject(&stru_1402FA900, UserRequest, 1, 0, &v1203);
                if ( v414 >= 0 && v414 != 192 && v414 != 258 )
                {
                  if ( stru_1402FA8E0.Header.SignalState || !dword_14074714C )
                  {
                    v415 = MEMORY[0xFFFFF78000000320];
                    TimeIncrement = KeQueryTimeIncrement();
                    dword_14074714C = 1;
                    qword_140747168 = v415 * TimeIncrement / 10000;
                    KeResetEvent(&stru_1402FA8E0);
                  }
                  KeReleaseMutex(&stru_1402FA900, 0);
                }
                v417 = RtlUIntAdd(4u, 4u, &v1218);
                v419 = v1065;
                Acl = v417;
                if ( v417 >= 0 )
                  v419 = v1218;
                v1065 = v419;
                if ( v417 < 0 )
                  goto LABEL_968;
                v934 = v419;
                v420 = RtlUIntAdd(v418, 8u, &v927);
                v422 = v421;
                Acl = v420;
                if ( v420 >= 0 )
                  v422 = v927;
                v1065 = v422;
                if ( v420 < 0 )
                {
LABEL_968:
                  v424 = v927;
                }
                else
                {
                  v423 = RtlUIntAdd(v421, v422, &v934);
                  v424 = v927;
                  Acl = v423;
                  if ( v423 >= 0 )
                    v424 = v934;
                }
                if ( Acl < 0 )
                  goto LABEL_182;
                v1064[0] = 8;
                Acl = RtlUIntAdd(8u, v424, v1064);
                if ( Acl >= 0 )
                {
                  v426 = (v1064[0] + 7) & 0xFFFFFFF8;
                  if ( v426 >= v1064[0] )
                  {
                    v1063 = (v1064[0] + 7) & 0xFFFFFFF8;
                    v428 = RtlUIntAdd(v426, 8u, &v1063);
                    v427 = v927;
                    Acl = v428;
                    if ( v428 >= 0 )
                      v427 = v1063;
                  }
                  else
                  {
                    v427 = v927;
                    Acl = -1073741675;
                  }
                  if ( Acl < 0 )
                    goto LABEL_182;
                  v908 = 4;
                  Acl = RtlUIntAdd(4u, v427, &v908);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlUIntAdd(v908, v429, &v908);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlUIntAdd(v908, *((_DWORD *)v126 + 4), &v908);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlUIntAdd(v908, 4u, &v908);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlUIntAdd(v908, *((_DWORD *)v126 + 8), &v908);
                          v430 = v1219;
                          if ( Acl >= 0 )
                            v430 = v908;
                          v1219 = v430;
                        }
                      }
                    }
                  }
                }
                if ( Acl < 0 )
                  goto LABEL_182;
                uAugend[0] = v425;
                if ( !v425 )
                {
                  Acl = -1073741762;
                  goto LABEL_1013;
                }
                v431 = ExAllocatePoolWithTag(PagedPool, v425, 0x20534C53u);
                if ( !v431 )
                {
                  Acl = -1073741801;
                  goto LABEL_1013;
                }
                v432 = 0;
                *(_QWORD *)&uAugend[1] = v431;
                v894 = 0;
                v1051 = 0x10000000;
                if ( &v1051 )
                {
                  Acl = RtlULongLongAdd((ULONGLONG)v431, 4uLL, v1334);
                  if ( Acl >= 0 )
                  {
                    if ( v434 + 2 > (_DWORD *)((char *)v434 + uAugend[0]) )
                    {
                      Acl = -1073741789;
                      goto LABEL_1013;
                    }
                    v435 = (int *)v1334[0];
                    *v434 = v433;
                    *v435 = v1051;
                    v432 = ++v894;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_182;
                v1236 = v1272;
                if ( &v1236 )
                {
                  if ( *(_QWORD *)&uAugend[1] )
                  {
                    v438 = *(UINT **)&uAugend[1];
                    v1204 = *(_QWORD *)&uAugend[1];
                    if ( v432 )
                    {
                      while ( 1 )
                      {
                        v439 = RtlUIntAdd(4u, *v438, &v1221);
                        Acl = v439;
                        if ( v439 >= 0 )
                          v440 = v1221;
                        v959 = v440;
                        if ( v439 < 0 )
                          break;
                        Acl = RtlULongLongAdd(v441, v440, &v1204);
                        if ( Acl < 0 )
                          break;
                        v438 = (UINT *)v1204;
                        if ( v442 + 1 >= v432 )
                          goto LABEL_1008;
                      }
                    }
                    else
                    {
LABEL_1008:
                      Acl = RtlULongLongAdd((ULONGLONG)v438, 4uLL, v1335);
                      if ( Acl >= 0 )
                      {
                        if ( (unsigned __int64)(v443 + 3) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                        {
                          v444 = (_QWORD *)v1335[0];
                          *v443 = 8;
                          *v444 = v1236;
                          ++v894;
                        }
                        else
                        {
                          Acl = -1073741789;
                        }
                      }
                    }
                  }
                  else
                  {
                    v436 = RtlUIntAdd(4u, 8u, &v1220);
                    v437 = v959;
                    Acl = v436;
                    if ( v436 >= 0 )
                      v437 = v1220;
                    v959 = v437;
                    if ( v436 >= 0 )
                    {
                      Acl = RtlUIntAdd(uAugend[0], v437, uAugend);
                      if ( Acl >= 0 )
                      {
                        ++v894;
                        Acl = 0;
                      }
                    }
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
LABEL_1013:
                if ( Acl < 0 )
                  goto LABEL_182;
                goto LABEL_733;
              case 15:
                v320 = sub_1406BFBA8(v897, 0x140000000uLL, v125, &v894);
                goto LABEL_732;
              case 16:
                v445 = (PSID *)qword_140747460;
                v446 = RtlLengthSid(*(PSID *)(qword_140747460 + 384));
                v447 = RtlLengthSid(v445[34]) + v446;
                v448 = RtlLengthSid(v445[49]) + 32 + v447;
                v449 = (ACL *)ExAllocatePoolWithTag(PagedPool, v448, 0x20534C53u);
                v452 = v449;
                if ( !v449 )
                {
                  Acl = -1073741801;
                  goto LABEL_1048;
                }
                Acl = RtlCreateAcl(v449, v448, 2u);
                if ( Acl >= 0 )
                {
                  Acl = RtlAddAccessAllowedAce(v452, 2u, 0x20u, v445[48]);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlAddAccessAllowedAce(v452, 2u, 0x20u, v445[49]);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlAddAccessAllowedAce(v452, 2u, 0x20u, v445[34]);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlCreateSecurityDescriptor(v1354, 1u);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlSetDaclSecurityDescriptor(v1354, 1u, v452, 0);
                          if ( Acl >= 0 )
                          {
                            SeCaptureSubjectContext(&SubjectSecurityContext);
                            v453 = SeAccessCheck(
                                     v1354,
                                     &SubjectSecurityContext,
                                     0,
                                     0x20u,
                                     0,
                                     0LL,
                                     (PGENERIC_MAPPING)&IopFileMapping,
                                     1,
                                     &v1293,
                                     &v1222);
                            SeReleaseSubjectContext(&SubjectSecurityContext);
                            if ( !v453 )
                              Acl = v1222;
                          }
                        }
                      }
                    }
                  }
                }
                ExFreePoolWithTag(v452, 0x20534C53u);
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1089 = 0;
                v1237 = 8LL;
                Acl = 0;
                ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1237, 8u, &v1089);
                if ( *((_DWORD *)v935 + 4) != 160 )
                  goto LABEL_1042;
                if ( memcmp(qword_1406ECF30, *((const void **)v935 + 3), 0xA0uLL)
                  || *((_DWORD *)v126 + 4) != 160
                  || memcmp(qword_1406ECFD0, *((const void **)v126 + 3), 0xA0uLL)
                  || *((_DWORD *)v935 + 8) != 8
                  || **((_QWORD **)v935 + 5) != 0x35DCEB18766AABAALL
                  || *((_DWORD *)v126 + 8) != 8
                  || **((_QWORD **)v126 + 5) != 0x14CEA8BAE086077CLL )
                {
                  if ( memcmp(qword_1406ED2F0, *((const void **)v935 + 3), 0xA0uLL)
                    || *((_DWORD *)v126 + 4) != 160
                    || memcmp(qword_1406ED750, *((const void **)v126 + 3), 0xA0uLL)
                    || *((_DWORD *)v935 + 8) != 8
                    || **((_QWORD **)v935 + 5) != 0xF10D668DB2BB8BB9uLL
                    || *((_DWORD *)v126 + 8) != 8
                    || **((_QWORD **)v126 + 5) != 0x768DFD321621EA95LL )
                  {
LABEL_1042:
                    Acl = -2147024891;
                  }
                  if ( Acl < 0 )
                    goto LABEL_2144;
                }
                v1064[1] = 0;
                Acl = 0;
                UpdateFileEaAllowedExt_0 = QueryUpdateFileEaAllowedExt_0();
                if ( UpdateFileEaAllowedExt_0 == -1073741637
                  || (Acl = UpdateFileEaAllowedExt_0, UpdateFileEaAllowedExt_0 >= 0) )
                {
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                    Acl = -2147024891;
                }
LABEL_1048:
                if ( Acl < 0 )
                  goto LABEL_2144;
                v320 = sub_1406C0F88(v897, v450, v451, &v894);
                goto LABEL_732;
              case 17:
                v455 = (PSID *)qword_140747460;
                v456 = RtlLengthSid(*(PSID *)(qword_140747460 + 384));
                v457 = RtlLengthSid(v455[34]) + v456;
                v458 = RtlLengthSid(v455[49]) + 32 + v457;
                v459 = (ACL *)ExAllocatePoolWithTag(PagedPool, v458, 0x20534C53u);
                v462 = v459;
                if ( !v459 )
                {
                  Acl = -1073741801;
                  goto LABEL_1083;
                }
                Acl = RtlCreateAcl(v459, v458, 2u);
                if ( Acl >= 0 )
                {
                  Acl = RtlAddAccessAllowedAce(v462, 2u, 0x20u, v455[48]);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlAddAccessAllowedAce(v462, 2u, 0x20u, v455[49]);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlAddAccessAllowedAce(v462, 2u, 0x20u, v455[34]);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlCreateSecurityDescriptor(v1355, 1u);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlSetDaclSecurityDescriptor(v1355, 1u, v462, 0);
                          if ( Acl >= 0 )
                          {
                            SeCaptureSubjectContext(&v1351);
                            v463 = SeAccessCheck(
                                     v1355,
                                     &v1351,
                                     0,
                                     0x20u,
                                     0,
                                     0LL,
                                     (PGENERIC_MAPPING)&IopFileMapping,
                                     1,
                                     &v1295,
                                     &v983);
                            SeReleaseSubjectContext(&v1351);
                            if ( !v463 )
                              Acl = v983;
                          }
                        }
                      }
                    }
                  }
                }
                ExFreePoolWithTag(v462, 0x20534C53u);
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1090 = 0;
                v1238 = 8LL;
                Acl = 0;
                ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1238, 8u, &v1090);
                if ( *((_DWORD *)v935 + 4) != 160 )
                  goto LABEL_1076;
                if ( memcmp(qword_1406ECF30, *((const void **)v935 + 3), 0xA0uLL)
                  || *((_DWORD *)v126 + 4) != 160
                  || memcmp(qword_1406ECFD0, *((const void **)v126 + 3), 0xA0uLL)
                  || *((_DWORD *)v935 + 8) != 8
                  || **((_QWORD **)v935 + 5) != 0x35DCEB18766AABAALL
                  || *((_DWORD *)v126 + 8) != 8
                  || **((_QWORD **)v126 + 5) != 0x14CEA8BAE086077CLL )
                {
                  if ( memcmp(qword_1406ED2F0, *((const void **)v935 + 3), 0xA0uLL)
                    || *((_DWORD *)v126 + 4) != 160
                    || memcmp(qword_1406ED750, *((const void **)v126 + 3), 0xA0uLL)
                    || *((_DWORD *)v935 + 8) != 8
                    || **((_QWORD **)v935 + 5) != 0xF10D668DB2BB8BB9uLL
                    || *((_DWORD *)v126 + 8) != 8
                    || **((_QWORD **)v126 + 5) != 0x768DFD321621EA95LL )
                  {
LABEL_1076:
                    Acl = -2147024891;
                  }
                  if ( Acl < 0 )
                    goto LABEL_2144;
                }
                v1027 = 0;
                Acl = 0;
                v464 = QueryUpdateFileEaAllowedExt_0();
                if ( v464 == -1073741637 || (Acl = v464, v464 >= 0) && v1027 != 1 )
                {
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                    Acl = -2147024891;
                }
LABEL_1083:
                if ( Acl >= 0 )
                {
                  v320 = sub_1406C029C(v897, v460, v461, &v894);
LABEL_732:
                  Acl = v320;
                  if ( v320 >= 0 )
                    goto LABEL_733;
                }
                goto LABEL_2144;
              case 18:
                v1290 = __rdtsc();
                qword_140747160 = v1290;
                v933 = 0;
                v595 = RtlUIntAdd(4u, 4u, &v1114);
                v596 = v1033;
                Acl = v595;
                if ( v595 >= 0 )
                  v596 = v1114;
                v1033 = v596;
                if ( v595 < 0 )
                  goto LABEL_1513;
                Acl = RtlUIntAdd(0, v596, &v933);
                if ( Acl < 0 )
                  goto LABEL_1513;
                v598 = RtlUIntAdd(v597 + 4, v597 + 8, &v985);
                Acl = v598;
                if ( v598 >= 0 )
                  v599 = v985;
                v1033 = v599;
                if ( v598 < 0 )
                {
LABEL_1513:
                  v600 = v985;
                }
                else
                {
                  Acl = RtlUIntAdd(v933, v599, &v933);
                  v600 = v985;
                  if ( Acl >= 0 )
                    v600 = v933;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                uAugend[0] = v600;
                if ( !v600 )
                {
                  Acl = -1073741762;
                  goto LABEL_729;
                }
                v601 = ExAllocatePoolWithTag(PagedPool, v600, 0x20534C53u);
                if ( !v601 )
                {
                  Acl = -1073741801;
                  goto LABEL_729;
                }
                v602 = 0;
                *(_QWORD *)&uAugend[1] = v601;
                v894 = 0;
                v1034 = 0;
                if ( &v1034 )
                {
                  Acl = RtlULongLongAdd((ULONGLONG)v601, 4uLL, v1342);
                  if ( Acl >= 0 )
                  {
                    if ( v604 + 2 > (_DWORD *)((char *)v604 + uAugend[0]) )
                    {
                      Acl = -1073741789;
                      goto LABEL_729;
                    }
                    v605 = (_DWORD *)v1342[0];
                    *v604 = v603;
                    *v605 = v1034;
                    v602 = ++v894;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1245 = v1290;
                if ( !&v1245 )
                  goto LABEL_728;
                if ( !*(_QWORD *)&uAugend[1] )
                {
                  v606 = RtlUIntAdd(4u, 8u, &v1115);
                  v607 = v966;
                  Acl = v606;
                  if ( v606 >= 0 )
                    v607 = v1115;
                  v966 = v607;
                  if ( v606 >= 0 )
                  {
                    Acl = RtlUIntAdd(uAugend[0], v607, uAugend);
                    if ( Acl >= 0 )
                    {
                      ++v894;
                      Acl = 0;
                    }
                  }
                  goto LABEL_729;
                }
                v608 = *(UINT **)&uAugend[1];
                v1208 = *(_QWORD *)&uAugend[1];
                if ( !v602 )
                  goto LABEL_1539;
                while ( 1 )
                {
                  v609 = RtlUIntAdd(4u, *v608, &v1116);
                  Acl = v609;
                  if ( v609 >= 0 )
                    v610 = v1116;
                  v966 = v610;
                  if ( v609 < 0 )
                    goto LABEL_729;
                  Acl = RtlULongLongAdd(v611, v610, &v1208);
                  if ( Acl < 0 )
                    goto LABEL_729;
                  v608 = (UINT *)v1208;
                  if ( v612 + 1 >= v602 )
                  {
LABEL_1539:
                    Acl = RtlULongLongAdd((ULONGLONG)v608, 4uLL, v1343);
                    if ( Acl >= 0 )
                    {
                      if ( (unsigned __int64)(v613 + 3) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                      {
                        v614 = (unsigned __int64 *)v1343[0];
                        *v613 = 8;
                        *v614 = v1245;
                        ++v894;
                      }
                      else
                      {
                        Acl = -1073741789;
                      }
                    }
                    goto LABEL_729;
                  }
                }
              case 22:
                v516 = v897[0];
                if ( !v897[1] )
                {
                  Acl = -1073741811;
                  goto LABEL_1291;
                }
                if ( LODWORD(v897[0]) <= 3 )
                {
                  Acl = -1073741811;
                  goto LABEL_1291;
                }
                v517 = v897[1];
                v1003 = v897[1];
                do
                {
                  Acl = RtlULongLongAdd(v517, 4uLL, &v1003);
                  if ( Acl < 0 )
                    goto LABEL_1286;
                  Acl = RtlULongLongAdd(v1003, v518, &v1003);
                  if ( Acl < 0 )
                    goto LABEL_1286;
                  v517 = v1003;
                }
                while ( (unsigned int)(v519 + 1) < 3 );
                Acl = RtlULongLongAdd(v1003, 4uLL, &v1003);
                if ( Acl < 0 )
                {
LABEL_1286:
                  v520 = v1100;
                  v521 = v1279;
                  goto LABEL_1287;
                }
                v521 = (_QWORD *)v1003;
                v1100 = v520;
                if ( !v520 )
                  v521 = 0LL;
                v1279 = v521;
LABEL_1287:
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v520 != 8 )
                {
                  Acl = -1073741789;
                  goto LABEL_729;
                }
                v1284 = *v521;
LABEL_1291:
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v897[1] )
                {
                  if ( v516 > 4 )
                  {
                    v522 = v897[1];
                    v1004 = v897[1];
                    do
                    {
                      Acl = RtlULongLongAdd(v522, 4uLL, &v1004);
                      if ( Acl < 0 )
                        goto LABEL_1304;
                      Acl = RtlULongLongAdd(v1004, v523, &v1004);
                      if ( Acl < 0 )
                        goto LABEL_1304;
                      v522 = v1004;
                    }
                    while ( (unsigned int)(v524 + 1) < 4 );
                    Acl = RtlULongLongAdd(v1004, 4uLL, &v1004);
                    if ( Acl < 0 )
                    {
LABEL_1304:
                      v525 = v1101;
                      v526 = v1280;
                      goto LABEL_1305;
                    }
                    v526 = (void **)v1004;
                    v1101 = v525;
                    if ( !v525 )
                      v526 = 0LL;
                    v1280 = v526;
LABEL_1305:
                    if ( Acl < 0 )
                      goto LABEL_2144;
                    if ( v525 != 8 )
                    {
                      Acl = -1073741762;
                      goto LABEL_729;
                    }
                    v1281 = *v526;
                    v1241 = v1281;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v897[1] )
                {
                  if ( v516 > 5 )
                  {
                    v527 = v897[1];
                    v1005 = v897[1];
                    do
                    {
                      Acl = RtlULongLongAdd(v527, 4uLL, &v1005);
                      if ( Acl < 0 )
                        goto LABEL_1322;
                      Acl = RtlULongLongAdd(v1005, v528, &v1005);
                      if ( Acl < 0 )
                        goto LABEL_1322;
                      v527 = v1005;
                    }
                    while ( (unsigned int)(v529 + 1) < 5 );
                    Acl = RtlULongLongAdd(v1005, 4uLL, &v1005);
                    if ( Acl < 0 )
                    {
LABEL_1322:
                      v530 = v1102;
                      v531 = v1282;
                      goto LABEL_1323;
                    }
                    v531 = (UINT *)v1005;
                    v1102 = v530;
                    if ( !v530 )
                      v531 = 0LL;
                    v1282 = v531;
LABEL_1323:
                    if ( Acl < 0 )
                      goto LABEL_2144;
                    if ( v530 != 4 )
                    {
                      Acl = -1073741789;
                      goto LABEL_729;
                    }
                    v938 = *v531;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v938 != 16 )
                {
                  Acl = -1073741762;
                  goto LABEL_2144;
                }
                if ( !v1241 )
                  goto LABEL_728;
                v532 = ObReferenceObjectByHandle(v1241, 0, (POBJECT_TYPE)IoFileObjectType, 1, &v1283, 0LL);
                v533 = (struct _FILE_OBJECT *)v1283;
                Acl = v532;
                if ( v532 < 0 )
                  goto LABEL_1348;
                v534 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
                if ( !v534 )
                {
                  Acl = -1073741801;
                  goto LABEL_1348;
                }
                Acl = FsRtlKernelFsControlFile(v533, 590068, 0LL, 0, v534, 0x248u, &v904);
                if ( Acl < 0 )
                  goto LABEL_1347;
                if ( v904 < 0x40 )
                {
                  Acl = -1073741762;
                  goto LABEL_1347;
                }
                v941.m128i_i64[0] = *v534;
                if ( v533->WriteAccess )
                {
                  Acl = FsRtlKernelFsControlFile(v533, 590063, 0LL, 0, v534, 0x248u, &v904);
                  if ( Acl < 0 )
                    goto LABEL_1347;
                  if ( v904 < 8 )
                  {
                    Acl = -1073741762;
                    goto LABEL_1347;
                  }
                  v535 = *v534;
                }
                else
                {
                  Acl = FsRtlKernelFsControlFile(v533, 590059, 0LL, 0, v534, 0x248u, &v904);
                  if ( Acl < 0 )
                    goto LABEL_1347;
                  if ( v904 < 0x40 )
                  {
                    Acl = -1073741762;
                    goto LABEL_1347;
                  }
                  v535 = v534[3];
                }
                v941.m128i_i64[1] = v535;
                v1307 = v941;
LABEL_1347:
                ExFreePoolWithTag(v534, 0x20534C53u);
LABEL_1348:
                if ( v533 )
                  ObfDereferenceObject(v533);
                if ( Acl < 0 )
                  goto LABEL_2144;
                v940 = 0;
                v536 = RtlUIntAdd(4u, 8u, &v1103);
                v537 = v1031;
                Acl = v536;
                if ( v536 >= 0 )
                  v537 = v1103;
                v1031 = v537;
                if ( v536 < 0 )
                  goto LABEL_729;
                Acl = RtlUIntAdd(0, v537, &v940);
                if ( Acl < 0 )
                  goto LABEL_729;
                v538 = RtlUIntAdd(4u, v938, &v1104);
                Acl = v538;
                if ( v538 >= 0 )
                  v539 = v1104;
                v1031 = v539;
                if ( v538 < 0 )
                  goto LABEL_729;
                Acl = RtlUIntAdd(v940, v539, &v940);
                if ( Acl < 0 )
                  goto LABEL_729;
                uAugend[0] = v940;
                if ( !v940 )
                {
                  Acl = -1073741762;
                  goto LABEL_729;
                }
                v540 = ExAllocatePoolWithTag(PagedPool, v940, 0x20534C53u);
                if ( !v540 )
                {
                  Acl = -1073741801;
                  goto LABEL_729;
                }
                v541 = 0;
                *(_QWORD *)&uAugend[1] = v540;
                v894 = 0;
                v1242 = v1284;
                if ( &v1242 )
                {
                  Acl = RtlULongLongAdd((ULONGLONG)v540, 4uLL, v1338);
                  if ( Acl >= 0 )
                  {
                    if ( v542 + 3 > (_DWORD *)((char *)v542 + uAugend[0]) )
                    {
                      Acl = -1073741789;
                      goto LABEL_729;
                    }
                    v543 = (_QWORD *)v1338[0];
                    *v542 = 8;
                    *v543 = v1242;
                    v541 = ++v894;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                v544 = v938;
                if ( &v1307 )
                {
                  if ( !v938 )
                    goto LABEL_728;
                }
                else if ( v938 )
                {
                  goto LABEL_728;
                }
                if ( *(_QWORD *)&uAugend[1] )
                {
                  v547 = *(UINT **)&uAugend[1];
                  v1206 = *(_QWORD *)&uAugend[1];
                  if ( v541 )
                  {
                    while ( 1 )
                    {
                      v548 = RtlUIntAdd(4u, *v547, &v1106);
                      Acl = v548;
                      if ( v548 >= 0 )
                        v549 = v1106;
                      v963 = v549;
                      if ( v548 < 0 )
                        break;
                      Acl = RtlULongLongAdd(v550, v549, &v1206);
                      if ( Acl < 0 )
                        break;
                      v547 = (UINT *)v1206;
                      if ( v551 + 1 >= v541 )
                        goto LABEL_1386;
                    }
                  }
                  else
                  {
LABEL_1386:
                    Acl = RtlULongLongAdd((ULONGLONG)v547, 4uLL, v1339);
                    if ( Acl >= 0 )
                    {
                      if ( (unsigned __int64)v552 + v544 + 4 <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                      {
                        v553 = (void *)v1339[0];
                        *v552 = v544;
                        memmove(v553, &v1307, v544);
                        ++v894;
                      }
                      else
                      {
                        Acl = -1073741789;
                      }
                    }
                  }
                }
                else
                {
                  v545 = RtlUIntAdd(4u, v938, &v1105);
                  v546 = v963;
                  Acl = v545;
                  if ( v545 >= 0 )
                    v546 = v1105;
                  v963 = v546;
                  if ( v545 >= 0 )
                  {
                    Acl = RtlUIntAdd(uAugend[0], v546, uAugend);
                    if ( Acl >= 0 )
                    {
                      ++v894;
                      Acl = 0;
                    }
                  }
                }
                goto LABEL_729;
              case 23:
                v465 = (PSID *)qword_140747460;
                v466 = RtlLengthSid(*(PSID *)(qword_140747460 + 392));
                v467 = RtlLengthSid(v465[48]) + v466;
                v468 = RtlLengthSid(v465[34]) + 32 + v467;
                v469 = (ACL *)ExAllocatePoolWithTag(PagedPool, v468, 0x20534C53u);
                v470 = v469;
                if ( !v469 )
                {
                  Acl = -1073741801;
                  goto LABEL_1087;
                }
                Acl = RtlCreateAcl(v469, v468, 2u);
                if ( Acl >= 0 )
                {
                  Acl = RtlAddAccessAllowedAce(v470, 2u, 0x20u, v465[48]);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlAddAccessAllowedAce(v470, 2u, 0x20u, v465[49]);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlAddAccessAllowedAce(v470, 2u, 0x20u, v465[34]);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlCreateSecurityDescriptor(v1356, 1u);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlSetDaclSecurityDescriptor(v1356, 1u, v470, 0);
                          if ( Acl >= 0 )
                          {
                            SeCaptureSubjectContext(&v1352);
                            v472 = SeAccessCheck(
                                     v1356,
                                     &v1352,
                                     0,
                                     0x20u,
                                     0,
                                     0LL,
                                     (PGENERIC_MAPPING)&IopFileMapping,
                                     1,
                                     &v1300,
                                     &v984);
                            SeReleaseSubjectContext(&v1352);
                            if ( !v472 )
                              Acl = v984;
                          }
                        }
                      }
                    }
                  }
                }
                ExFreePoolWithTag(v470, 0x20534C53u);
                if ( Acl < 0 )
                  goto LABEL_1087;
                v1091 = 0;
                v1239 = 8LL;
                Acl = 0;
                ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1239, 8u, &v1091);
                if ( *((_DWORD *)v935 + 4) != 160 )
                  goto LABEL_1128;
                if ( !memcmp(qword_1406ECF30, *((const void **)v935 + 3), 0xA0uLL)
                  && *((_DWORD *)v126 + 4) == 160
                  && !memcmp(qword_1406ECFD0, *((const void **)v126 + 3), 0xA0uLL)
                  && *((_DWORD *)v935 + 8) == 8
                  && **((_QWORD **)v935 + 5) == 0x35DCEB18766AABAALL
                  && *((_DWORD *)v126 + 8) == 8
                  && **((_QWORD **)v126 + 5) == 0x14CEA8BAE086077CLL )
                {
                  goto LABEL_1130;
                }
                if ( !memcmp(qword_1406ED2F0, *((const void **)v935 + 3), 0xA0uLL)
                  && *((_DWORD *)v126 + 4) == 160
                  && !memcmp(qword_1406ED750, *((const void **)v126 + 3), 0xA0uLL)
                  && *((_DWORD *)v935 + 8) == 8
                  && **((_QWORD **)v935 + 5) == 0xF10D668DB2BB8BB9uLL
                  && *((_DWORD *)v126 + 8) == 8
                  && **((_QWORD **)v126 + 5) == 0x768DFD321621EA95LL )
                {
                  goto LABEL_1129;
                }
                if ( !memcmp(qword_1406ED6B0, *((const void **)v935 + 3), 0xA0uLL)
                  && *((_DWORD *)v126 + 4) == 160
                  && !memcmp(sub_1406ECCB0, *((const void **)v126 + 3), 0xA0uLL)
                  && *((_DWORD *)v935 + 8) == 8
                  && **((_QWORD **)v935 + 5) == 0xA10B922F1A2F2A8AuLL
                  && *((_DWORD *)v126 + 8) == 8
                  && **((_QWORD **)v126 + 5) == 0xC349B50B0A716A96uLL )
                {
                  goto LABEL_1130;
                }
                if ( memcmp(qword_1406ED1B0, *((const void **)v935 + 3), 0xA0uLL)
                  || *((_DWORD *)v126 + 4) != 160
                  || memcmp(qword_1406ED390, *((const void **)v126 + 3), 0xA0uLL)
                  || *((_DWORD *)v935 + 8) != 8
                  || **((_QWORD **)v935 + 5) != 0xA6723CF736811074uLL
                  || *((_DWORD *)v126 + 8) != 8
                  || **((_QWORD **)v126 + 5) != 0x7511056E178DA076LL )
                {
LABEL_1128:
                  Acl = -2147024891;
                }
LABEL_1129:
                if ( Acl >= 0 )
                {
LABEL_1130:
                  Acl = 0;
                  v1028 = 0;
                  v473 = QueryUpdateFileEaAllowedExt_0();
                  if ( v473 == -1073741637 || (Acl = v473, v473 >= 0) && v1028 != 1 )
                  {
                    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                      Acl = -2147024891;
                  }
                }
LABEL_1087:
                if ( Acl < 0 )
                  goto LABEL_2144;
                v471 = v897[0];
                if ( !v897[1] )
                {
                  Acl = -1073741811;
                  goto LABEL_1151;
                }
                if ( LODWORD(v897[0]) <= 3 )
                {
                  Acl = -1073741811;
                  goto LABEL_1151;
                }
                v474 = v897[1];
                v999 = v897[1];
                do
                {
                  Acl = RtlULongLongAdd(v474, 4uLL, &v999);
                  if ( Acl < 0 )
                    goto LABEL_1146;
                  Acl = RtlULongLongAdd(v999, v475, &v999);
                  if ( Acl < 0 )
                    goto LABEL_1146;
                  v474 = v999;
                }
                while ( (unsigned int)(v476 + 1) < 3 );
                Acl = RtlULongLongAdd(v999, 4uLL, &v999);
                if ( Acl < 0 )
                {
LABEL_1146:
                  v477 = v1092;
                  v478 = v1273;
                  goto LABEL_1147;
                }
                v478 = (void **)v999;
                v1092 = v477;
                if ( !v477 )
                  v478 = 0LL;
                v1273 = v478;
LABEL_1147:
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v477 != 8 )
                {
                  Acl = -1073741762;
                  goto LABEL_729;
                }
                v1274 = *v478;
                Handle = v1274;
LABEL_1151:
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v897[1] )
                {
                  if ( v471 > 4 )
                  {
                    v479 = v897[1];
                    v1000 = v897[1];
                    do
                    {
                      Acl = RtlULongLongAdd(v479, 4uLL, &v1000);
                      if ( Acl < 0 )
                        goto LABEL_1164;
                      Acl = RtlULongLongAdd(v1000, v480, &v1000);
                      if ( Acl < 0 )
                        goto LABEL_1164;
                      v479 = v1000;
                    }
                    while ( (unsigned int)(v481 + 1) < 4 );
                    Acl = RtlULongLongAdd(v1000, 4uLL, &v1000);
                    if ( Acl < 0 )
                    {
LABEL_1164:
                      v482 = v1093;
                      v483 = v1275;
                      goto LABEL_1165;
                    }
                    v483 = (NTSTATUS *)v1000;
                    v1093 = v482;
                    if ( !v482 )
                      v483 = 0LL;
                    v1275 = v483;
LABEL_1165:
                    if ( Acl < 0 )
                      goto LABEL_2144;
                    if ( v482 != 4 )
                    {
                      Acl = -1073741789;
                      goto LABEL_729;
                    }
                    v1097 = *v483;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v897[1] )
                {
                  if ( v471 > 5 )
                  {
                    v484 = v897[1];
                    v1001 = v897[1];
                    do
                    {
                      Acl = RtlULongLongAdd(v484, 4uLL, &v1001);
                      if ( Acl < 0 )
                        goto LABEL_1182;
                      Acl = RtlULongLongAdd(v1001, v485, &v1001);
                      if ( Acl < 0 )
                        goto LABEL_1182;
                      v484 = v1001;
                    }
                    while ( (unsigned int)(v486 + 1) < 5 );
                    Acl = RtlULongLongAdd(v1001, 4uLL, &v1001);
                    if ( Acl < 0 )
                    {
LABEL_1182:
                      v487 = v1094;
                      v488 = v1276;
                      goto LABEL_1183;
                    }
                    v488 = (NTSTATUS *)v1001;
                    v1094 = v487;
                    if ( !v487 )
                      v488 = 0LL;
                    v1276 = v488;
LABEL_1183:
                    if ( Acl < 0 )
                      goto LABEL_2144;
                    if ( v487 != 4 )
                    {
                      Acl = -1073741789;
                      goto LABEL_729;
                    }
                    v1096 = *v488;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( !v897[1] || v471 <= 6 )
                  goto LABEL_728;
                v489 = v897[1];
                v1002 = v897[1];
                do
                {
                  Acl = RtlULongLongAdd(v489, 4uLL, &v1002);
                  if ( Acl < 0 )
                    goto LABEL_1198;
                  Acl = RtlULongLongAdd(v1002, v490, &v1002);
                  if ( Acl < 0 )
                    goto LABEL_1198;
                  v489 = v1002;
                }
                while ( (unsigned int)(v491 + 1) < 6 );
                Acl = RtlULongLongAdd(v1002, 4uLL, &v1002);
                if ( Acl < 0 )
                {
LABEL_1198:
                  v492 = v1095;
                  v493 = v1277;
                  goto LABEL_1199;
                }
                v493 = (_QWORD *)v1002;
                v1095 = v492;
                if ( !v492 )
                  v493 = 0LL;
                v1277 = v493;
LABEL_1199:
                if ( Acl < 0 )
                  goto LABEL_2144;
                if ( v492 != 16 )
                {
                  Acl = -1073741811;
                  goto LABEL_2144;
                }
                v494 = 0LL;
                v983 = v1096;
                v984 = v1097;
                TargetFile = 0LL;
                if ( !Handle || !v493 )
                  goto LABEL_728;
                v495 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
                v496 = (struct _FILE_OBJECT *)Object;
                Acl = v495;
                if ( v495 < 0 )
                  goto LABEL_1239;
                v497 = (size_t *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
                if ( !v497 )
                {
                  Acl = -1073741801;
                  goto LABEL_1239;
                }
                Acl = FsRtlKernelFsControlFile(v496, 590068, 0LL, 0, v497, 0x248u, &v960);
                if ( Acl < 0 )
                  goto LABEL_1213;
                if ( v960 < 0x40 )
                  goto LABEL_1212;
                v1088[0] = *v497;
                Acl = FsRtlKernelFsControlFile(v496, 590059, 0LL, 0, v497, 0x248u, &v960);
                if ( Acl < 0 )
                  goto LABEL_1213;
                if ( v960 < 0x40 )
                {
LABEL_1212:
                  Acl = -1073741762;
LABEL_1213:
                  v498 = v941;
                }
                else
                {
                  v1088[1] = v497[3];
                  v498 = *(__m128i *)v1088;
                  v941 = *(__m128i *)v1088;
                }
                ExFreePoolWithTag(v497, 0x20534C53u);
                if ( Acl < 0 )
                  goto LABEL_1239;
                if ( v498.m128i_i64[0] != *v493 )
                {
                  Acl = -1073741762;
                  goto LABEL_1239;
                }
                if ( _mm_srli_si128(v498, 8).m128i_u64[0] != v493[1] )
                {
                  Acl = -1073741762;
                  goto LABEL_1239;
                }
                if ( v984 )
                {
                  v941.m128i_i64[0] = -1LL;
                  v941.m128i_i64[1] = 0x7FFFFFFFFFFFFFFFLL;
                  v498 = v941;
LABEL_1236:
                  v501 = (char *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
                  if ( v501 )
                  {
                    *(_QWORD *)v501 = 0LL;
                    *((_QWORD *)v501 + 1) = 0LL;
                    *((_QWORD *)v501 + 2) = 0LL;
                    *((_QWORD *)v501 + 3) = 0LL;
                    v501[33] = 0;
                    *((_WORD *)v501 + 17) = 0;
                    *((_DWORD *)v501 + 9) = 0;
                    *((_QWORD *)v501 + 5) = 0LL;
                    *((_QWORD *)v501 + 6) = 0LL;
                    *((_WORD *)v501 + 28) = 0;
                    v501[4] = 0;
                    *((_WORD *)v501 + 3) = 24;
                    v501[5] = 25;
                    strcpy(v501 + 8, "$Kernel.Purge.AppxFICach");
                    *(__m128i *)(v501 + 34) = v498;
                    *(_QWORD *)(v501 + 50) = 0LL;
                    v494 = v501;
                    Acl = FsRtlSetKernelEaFile(v496, v501, 58);
                  }
                  else
                  {
                    Acl = -1073741801;
                  }
                  goto LABEL_1239;
                }
                if ( ObOpenObjectByPointer(v496, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &TargetFile) >= 0 )
                {
                  v499 = 0;
                  if ( (unsigned int)(v983 - 2) <= 1 )
                    v499 = 6;
                  ZwSetCachedSigningLevel(2u, v499, &TargetFile, 1u, TargetFile);
                }
                v500 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
                if ( !v500 )
                {
                  Acl = -1073741801;
                  goto LABEL_1239;
                }
                Acl = FsRtlKernelFsControlFile(v496, 590068, 0LL, 0, v500, 0x248u, &v961);
                if ( Acl >= 0 )
                {
                  if ( v961 >= 0x40 )
                  {
                    v941.m128i_i64[0] = *v500;
                    Acl = FsRtlKernelFsControlFile(v496, 590059, 0LL, 0, v500, 0x248u, &v961);
                    if ( Acl >= 0 )
                    {
                      if ( v961 >= 0x40 )
                      {
                        v941.m128i_i64[1] = v500[3];
                        v498 = v941;
                      }
                      else
                      {
                        Acl = -1073741762;
                      }
                    }
                  }
                  else
                  {
                    Acl = -1073741762;
                  }
                }
                ExFreePoolWithTag(v500, 0x20534C53u);
                if ( Acl >= 0 )
                  goto LABEL_1236;
LABEL_1239:
                if ( TargetFile )
                  ZwClose(TargetFile);
                if ( v496 )
                  ObfDereferenceObject(v496);
                if ( v494 )
                  ExFreePoolWithTag(v494, 0x20534C53u);
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1029 = 0;
                if ( &v1029 )
                {
                  if ( *(_QWORD *)&uAugend[1] )
                  {
                    v504 = *(UINT **)&uAugend[1];
                    v1205 = *(_QWORD *)&uAugend[1];
                    if ( v894 )
                    {
                      while ( 1 )
                      {
                        v505 = RtlUIntAdd(4u, *v504, &v1099);
                        Acl = v505;
                        if ( v505 >= 0 )
                          v506 = v1099;
                        v962 = v506;
                        if ( v505 < 0 )
                          break;
                        Acl = RtlULongLongAdd(v507, v506, &v1205);
                        if ( Acl < 0 )
                          break;
                        v504 = (UINT *)v1205;
                        if ( v508 + 1 >= v894 )
                          goto LABEL_1259;
                      }
                    }
                    else
                    {
LABEL_1259:
                      Acl = RtlULongLongAdd((ULONGLONG)v504, 4uLL, v1336);
                      if ( Acl >= 0 )
                      {
                        if ( (unsigned __int64)(v510 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                        {
                          Acl = -1073741789;
                          goto LABEL_729;
                        }
                        v511 = (_DWORD *)v1336[0];
                        *v510 = v509;
                        *v511 = v1029;
                        ++v894;
                      }
                    }
                  }
                  else
                  {
                    v502 = RtlUIntAdd(4u, 4u, &v1098);
                    v503 = v962;
                    Acl = v502;
                    if ( v502 >= 0 )
                      v503 = v1098;
                    v962 = v503;
                    if ( v502 >= 0 )
                    {
                      Acl = RtlUIntAdd(uAugend[0], v503, uAugend);
                      if ( Acl >= 0 )
                      {
                        ++v894;
                        goto LABEL_1265;
                      }
                    }
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2144;
LABEL_1265:
                if ( !uAugend[0] )
                {
                  Acl = -1073741762;
                  goto LABEL_729;
                }
                v512 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
                if ( !v512 )
                {
                  Acl = -1073741801;
                  goto LABEL_729;
                }
                *(_QWORD *)&uAugend[1] = v512;
                v894 = 0;
                v1030 = 0;
                if ( &v1030 )
                {
                  Acl = RtlULongLongAdd((ULONGLONG)v512, 4uLL, v1337);
                  if ( Acl >= 0 )
                  {
                    if ( v514 + 2 <= (_DWORD *)((char *)v514 + uAugend[0]) )
                    {
                      v515 = (_DWORD *)v1337[0];
                      *v514 = v513;
                      *v515 = v1030;
                      ++v894;
                    }
                    else
                    {
                      Acl = -1073741789;
                    }
                  }
                  goto LABEL_729;
                }
LABEL_728:
                Acl = -1073741811;
LABEL_729:
                if ( Acl < 0 )
                  goto LABEL_2144;
LABEL_733:
                v1240 = __rdtsc();
                v923 = 8;
                Acl = RtlUIntAdd(8u, uAugend[0], &v923);
                if ( Acl >= 0 )
                {
                  v321 = (v923 + 7) & 0xFFFFFFF8;
                  if ( v321 >= v923 )
                  {
                    v923 = (v923 + 7) & 0xFFFFFFF8;
                    if ( v321 )
                    {
                      v802 = (char *)ExAllocatePoolWithTag(PagedPool, v321, 0x20534C53u);
                      v803 = v802;
                      if ( v802 )
                      {
                        v918 = (ULONGLONG)v802;
                        *(_DWORD *)v802 = v894;
                        Acl = RtlULongLongAdd((ULONGLONG)v802, 4uLL, &v918);
                        if ( Acl >= 0 )
                        {
                          v805 = v918;
                          *(_DWORD *)v918 = uAugend[0];
                          Acl = RtlULongLongAdd(v805, v804, &v918);
                          if ( Acl >= 0 )
                          {
                            *(_QWORD *)&v803[v923 - 8] = v1240;
                            memmove((void *)v918, *(const void **)&uAugend[1], uAugend[0]);
                            v806 = v923;
                            v807 = (unsigned __int8 *)v803;
                            v913 = v923;
                            v981 = v803;
                            goto LABEL_2053;
                          }
                        }
                        ExFreePoolWithTag(v803, 0x20534C53u);
                      }
                      else
                      {
                        Acl = -1073741801;
                      }
                    }
                    else
                    {
                      Acl = -1073741762;
                    }
                  }
                  else
                  {
                    Acl = -1073741675;
                  }
                }
                v806 = v913;
                v807 = (unsigned __int8 *)v913;
LABEL_2053:
                if ( Acl < 0 )
                  goto LABEL_2144;
                v1215 = 0LL;
                v1303 = 0LL;
                if ( !v807 )
                {
                  Acl = -1073741811;
                  goto LABEL_2144;
                }
                if ( !v806 )
                {
                  Acl = -1073741811;
                  goto LABEL_2144;
                }
                v808 = (__int64 *)*((_QWORD *)v942 + 5);
                if ( !v808 )
                {
                  Acl = -1073741811;
                  goto LABEL_2144;
                }
                v809 = *((_DWORD *)v942 + 8);
                if ( !v809 )
                {
                  Acl = -1073741811;
                  goto LABEL_2144;
                }
                v810 = *((_QWORD *)v942 + 3);
                v918 = v810;
                if ( v810 )
                {
                  v811 = *((_DWORD *)v942 + 4);
                  if ( v811 )
                  {
                    v812 = v806;
                    if ( v809 != 8 || v811 != 160 )
                      goto LABEL_2111;
                    v813 = *v808;
                    LOBYTE(v809) = 0;
                    v914 = v809;
                    v814 = 0LL;
                    if ( v806 >= 0x20uLL )
                    {
                      v815 = 0LL;
                      v816 = 0LL;
                      v817 = v807 + 16;
                      do
                      {
                        v818 = _mm_loadu_si128((const __m128i *)v817 - 1);
                        v814 += 32LL;
                        v817 += 32;
                        v815 = _mm_xor_si128(v818, v815);
                        v819 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v817 - 2), v816);
                        v816 = v819;
                      }
                      while ( v814 < v806 - (unsigned __int64)(v806 & 0x1F) );
                      v820 = _mm_xor_si128(v815, v819);
                      v821 = _mm_xor_si128(v820, _mm_srli_si128(v820, 8));
                      v822 = _mm_xor_si128(v821, _mm_srli_si128(v821, 4));
                      v823 = _mm_xor_si128(v822, _mm_srli_si128(v822, 2));
                      v809 = _mm_cvtsi128_si32(_mm_xor_si128(v823, _mm_srli_si128(v823, 1)));
                      v914 = v809;
                    }
                    if ( v814 < v806 )
                    {
                      do
                        LOBYTE(v809) = v807[v814++] ^ v809;
                      while ( v814 < v806 );
                      v914 = v809;
                    }
                    v824 = ExAllocatePoolWithTag(PagedPool, v806 + 8LL, 0x20534C53u);
                    v1077 = v824;
                    if ( v824 )
                    {
                      v1358 = v813;
                      v825 = v812 & 7;
                      v1078 = (size_t)v824;
                      v1088[0] = (unsigned int)v825;
                      v826 = v824;
                      v827 = 0;
                      v901 = 0;
                      v899 = -1;
                      v902 = 0;
                      v904 = 0;
                      if ( v825 )
                      {
                        v902 = 0;
                        v828 = 0;
                        v904 = 0;
                        v829 = 0;
                        v830 = 0;
                        v831 = 56;
                        do
                        {
                          v832 = *v807;
                          if ( v830 >= 4 )
                            v828 |= v832 << v831;
                          else
                            v829 |= v832 << (v831 - 32);
                          ++v807;
                          ++v830;
                          v831 -= 8;
                        }
                        while ( v830 < v825 );
                        v904 = v829;
                        v902 = v828;
                        v833 = 16LL;
                        v834 = (unsigned __int8 *)(v810 + 158);
                        v835 = (unsigned __int8 *)(v918 + 126);
                        v912 = 16LL;
                        v836 = 30;
                        do
                        {
                          v837 = v834[1];
                          if ( v837 < 0x1Fu )
                          {
                            v838 = funcs_1404984A6[v837](
                                     (char)(v836 + 1),
                                     *(v835 - 2),
                                     *(v835 - 1),
                                     *v835,
                                     v835[1],
                                     (__int64)&v1358,
                                     v827);
                            v827 = v901;
                            v31 = v838 ^ v899;
                            v833 = v912;
                            v899 ^= v838;
                          }
                          if ( *v834 < 0x1Fu )
                          {
                            v839 = funcs_1404984A6[*v834](
                                     v836,
                                     *(v835 - 6),
                                     *(v835 - 5),
                                     *(v835 - 4),
                                     *(v835 - 3),
                                     (__int64)&v1358,
                                     v31);
                            v31 = v899;
                            v827 = v839 ^ v901;
                            v833 = v912;
                            v901 ^= v839;
                          }
                          v836 -= 2;
                          v835 -= 8;
                          v834 -= 2;
                          v912 = --v833;
                        }
                        while ( v833 );
                        v827 ^= v904;
                        v840 = v902 ^ v31;
                        v841 = 0;
                        v842 = v1088[0];
                        v826 = (_BYTE *)v1078;
                        v901 = v827;
                        v899 = v840;
                        if ( SLODWORD(v1088[0]) > 0 )
                        {
                          do
                          {
                            if ( v841 >= 4 )
                            {
                              v840 = __ROL4__(v840, 8);
                              *v826 = v840;
                            }
                            else
                            {
                              v827 = __ROL4__(v827, 8);
                              *v826 = v827;
                            }
                            ++v826;
                            ++v841;
                          }
                          while ( v841 < v842 );
                          v827 = v901;
                          v840 = v899;
                        }
                        v843 = v842 - 4;
                        if ( v842 - 4 <= 0 )
                        {
                          v899 = 0;
                          v31 = 0;
                          if ( v843 < 0 )
                          {
                            v827 = v827 >> (-8 * v843) << (-8 * v843);
                            v901 = v827;
                          }
                        }
                        else
                        {
                          v31 = v840 >> (8 * (4 - v843)) << (8 * (4 - v843));
                          v899 = v31;
                        }
                        v810 = v918;
                      }
                      Src = (void *)((unsigned __int64)v913 >> 3);
                      if ( Src )
                      {
                        v844 = v810 + 129;
                        v845 = v810 + 2;
                        v1078 = v810 + 129;
                        v1217 = v810 + 2;
                        v846 = v807 + 2;
                        v920 = (ULONGLONG)(v826 + 7);
                        do
                        {
                          v847 = (_BYTE *)v844;
                          v848 = 0;
                          v849 = (unsigned __int8 *)v845;
                          v850 = v846[3] | (v846[2] << 8);
                          v988 = v846[1] | ((*v846 | ((*(v846 - 1) | (*(v846 - 2) << 8)) << 8)) << 8);
                          v851 = v988 ^ v827;
                          v852 = v846[5] | ((v846[4] | (v850 << 8)) << 8);
                          v901 = v851;
                          v853 = v852 ^ v31;
                          v899 = v853;
                          v1088[0] = (size_t)(v846 + 8);
                          v854 = 16LL;
                          v912 = 16LL;
                          do
                          {
                            v855 = *(v847 - 1);
                            if ( v855 < 0x1Fu )
                            {
                              v856 = funcs_1404984A6[v855](
                                       v848,
                                       *(v849 - 2),
                                       *(v849 - 1),
                                       *v849,
                                       v849[1],
                                       (__int64)&v1358,
                                       v853);
                              v853 = v899;
                              v851 = v856 ^ v901;
                              v854 = v912;
                              v901 ^= v856;
                            }
                            if ( *v847 < 0x1Fu )
                            {
                              v857 = funcs_1404984A6[(unsigned __int8)*v847](
                                       (char)(v848 + 1),
                                       v849[2],
                                       v849[3],
                                       v849[4],
                                       v849[5],
                                       (__int64)&v1358,
                                       v851);
                              v851 = v901;
                              v853 = v857 ^ v899;
                              v854 = v912;
                              v899 ^= v857;
                            }
                            v848 += 2;
                            v849 += 8;
                            v847 += 2;
                            v912 = --v854;
                          }
                          while ( v854 );
                          v858 = (HIWORD(v1358) * ((unsigned __int16)v1358 + __ROR4__(~v853, 5))) ^ v851;
                          v859 = (v858 >> 10) ^ (WORD1(v1358) * (v858 ^ HIWORD(v1358))) ^ v853;
                          v860 = __ROR4__(v859, 10) ^ (WORD2(v1358) * __ROR4__(v859 ^ v1358, 12)) ^ v858;
                          v861 = (HIWORD(v1358) * __ROR4__(v860 - v1358, 14) - __ROL4__(v860, 8)) ^ v859;
                          v862 = (__ROL4__(v861, 2) + (unsigned __int16)v1358 * __ROR4__(HIDWORD(v1358) + v861, 15)) ^ v860;
                          v863 = (WORD1(v1358) * (v862 ^ WORD2(v1358))) ^ __ROR4__(v862, 6) ^ v861;
                          v864 = (HIDWORD(v1358) - (v863 ^ v1358)) ^ v862;
                          v865 = (HIWORD(v1358) * __ROL4__(v864 ^ WORD1(v1358), 6) - __ROL4__(v864, 2)) ^ v863;
                          v866 = ((unsigned __int16)v1358 * (v865 - WORD2(v1358)) - (v865 >> 13)) ^ v864;
                          v867 = (WORD1(v1358) * __ROR4__(HIDWORD(v1358) + v866, 9) - __ROL4__(v866, 2)) ^ v865;
                          v868 = v988;
                          v845 = v1217;
                          v846 = (unsigned __int8 *)v1088[0];
                          v869 = (__ROL4__(v867, 10) + WORD2(v1358) * __ROL4__(v867 - v1358, 5)) ^ v866;
                          v870 = (_BYTE *)v920;
                          v899 = v902 ^ v869 ^ v867 ^ HIDWORD(v1358) ^ v1358;
                          v901 = v904 ^ v869;
                          *(_BYTE *)(v920 - 4) = v904 ^ v869;
                          v901 = __ROR4__(v901, 8);
                          *v870 = v899;
                          v899 = __ROR4__(v899, 8);
                          *(v870 - 5) = v901;
                          v901 = __ROR4__(v901, 8);
                          *(v870 - 1) = v899;
                          v899 = __ROR4__(v899, 8);
                          *(v870 - 6) = v901;
                          v901 = __ROR4__(v901, 8);
                          *(v870 - 2) = v899;
                          v899 = __ROR4__(v899, 8);
                          *(v870 - 7) = v901;
                          *(v870 - 3) = v899;
                          v827 = __ROR4__(v901, 8);
                          v31 = __ROR4__(v899, 8);
                          v89 = Src == (void *)1;
                          Src = (char *)Src - 1;
                          v920 = (ULONGLONG)(v870 + 8);
                          v844 = v1078;
                          v901 = v827;
                          v899 = v31;
                          v904 = v868;
                          v902 = v852;
                        }
                        while ( !v89 );
                      }
                      v871 = v1077;
                      v872 = v913 + 8LL;
                      *(_QWORD *)((char *)v1077 + v913) = (unsigned __int8)v914;
                      v1215 = v871;
                      Acl = 0;
                      v1303 = v872;
                      if ( (_DWORD)v872 )
                      {
                        v873 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v872, 0x20534C53u);
                        v874 = v873;
                        if ( v873 )
                        {
                          memmove(v873, v871, (unsigned int)v872);
                          v875 = v942;
                          *((_QWORD *)v942 + 1) = v874;
                          *v875 = v872;
                        }
                        else
                        {
                          Acl = -1073741801;
                        }
                      }
                      else
                      {
                        Acl = -1073741762;
                      }
                    }
                    else
                    {
LABEL_2111:
                      Acl = -1073741823;
                    }
                    if ( v1215 )
                    {
                      ExFreePoolWithTag(v1215, 0x20534C53u);
                      v1215 = 0LL;
                    }
                    if ( Acl < 0 )
                      goto LABEL_2144;
                    v876 = (const void **)v942;
                    v903 = 4;
                    Acl = RtlUIntAdd(4u, *(_DWORD *)v942, &v903);
                    if ( Acl < 0
                      || (Acl = RtlUIntAdd(v903, v877, &v903), Acl < 0)
                      || (Acl = RtlUIntAdd(v903, *((_DWORD *)v876 + 4), &v903), Acl < 0)
                      || (Acl = RtlUIntAdd(v903, 4u, &v903), Acl < 0) )
                    {
                      v878 = v973;
                    }
                    else
                    {
                      Acl = RtlUIntAdd(v903, *((_DWORD *)v876 + 8), &v903);
                      v878 = v973;
                      if ( Acl >= 0 )
                        v878 = v903;
                      v973 = v878;
                    }
                    if ( Acl >= 0 )
                    {
                      if ( v878 )
                      {
                        v879 = ExAllocatePoolWithTag(PagedPool, v878, 0x20534C53u);
                        v880 = v879;
                        if ( v879 )
                        {
                          v926 = (ULONGLONG)v879;
                          *v879 = *(_DWORD *)v876;
                          Acl = RtlULongLongAdd((ULONGLONG)v879, 4uLL, &v926);
                          if ( Acl >= 0 )
                          {
                            memmove((void *)v926, v876[1], *(unsigned int *)v876);
                            Acl = RtlULongLongAdd(v926, *(unsigned int *)v876, &v926);
                            if ( Acl >= 0 )
                            {
                              v881 = v926;
                              *(_DWORD *)v926 = *((_DWORD *)v876 + 4);
                              Acl = RtlULongLongAdd(v881, 4uLL, &v926);
                              if ( Acl >= 0 )
                              {
                                memmove((void *)v926, v876[3], *((unsigned int *)v876 + 4));
                                Acl = RtlULongLongAdd(v926, *((unsigned int *)v876 + 4), &v926);
                                if ( Acl >= 0 )
                                {
                                  v882 = v926;
                                  *(_DWORD *)v926 = *((_DWORD *)v876 + 8);
                                  Acl = RtlULongLongAdd(v882, 4uLL, &v926);
                                  if ( Acl >= 0 )
                                  {
                                    memmove((void *)v926, v876[5], *((unsigned int *)v876 + 8));
                                    Acl = RtlULongLongAdd(v926, *((unsigned int *)v876 + 8), &v926);
                                    if ( Acl >= 0 )
                                    {
                                      v883 = v973;
                                      v884 = v880;
                                      v896 = v880;
                                      goto LABEL_2137;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          ExFreePoolWithTag(v880, 0x20534C53u);
                        }
                        else
                        {
                          Acl = -1073741801;
                        }
                      }
                      else
                      {
                        Acl = -1073741762;
                      }
                    }
                    v884 = v896;
                    v883 = (unsigned int)v896;
LABEL_2137:
                    if ( Acl >= 0 )
                    {
                      v5 = 0LL;
                      *v1304 = v884;
                      *v1305 = v883;
                      goto LABEL_2145;
                    }
                    goto LABEL_2144;
                  }
                }
LABEL_2143:
                Acl = -1073741811;
                goto LABEL_2144;
              case 24:
                v554 = v897[0];
                v555 = 0;
                if ( !v897[1] )
                {
                  Acl = -1073741811;
                  goto LABEL_1406;
                }
                if ( LODWORD(v897[0]) <= 3 )
                {
                  Acl = -1073741811;
                  goto LABEL_1406;
                }
                v556 = v897[1];
                v1006 = v897[1];
                do
                {
                  Acl = RtlULongLongAdd(v556, 4uLL, &v1006);
                  if ( Acl < 0 )
                    goto LABEL_1402;
                  Acl = RtlULongLongAdd(v1006, v557, &v1006);
                  if ( Acl < 0 )
                    goto LABEL_1402;
                  v556 = v1006;
                }
                while ( (unsigned int)(v558 + 1) < 3 );
                Acl = RtlULongLongAdd(v1006, 4uLL, &v1006);
                if ( Acl < 0 )
                {
LABEL_1402:
                  v559 = v1107;
                  v560 = v1285;
                  goto LABEL_1403;
                }
                v560 = (_QWORD *)v1006;
                v1107 = v559;
                if ( !v559 )
                  v560 = 0LL;
                v1285 = v560;
LABEL_1403:
                if ( Acl < 0 )
                  goto LABEL_1501;
                if ( v559 != 8 )
                {
LABEL_1500:
                  Acl = -1073741789;
                  goto LABEL_1501;
                }
                v1289 = *v560;
LABEL_1406:
                if ( Acl < 0 )
                  goto LABEL_1501;
                if ( v897[1] )
                {
                  if ( v554 > 4 )
                  {
                    v561 = v897[1];
                    v1007 = v897[1];
                    do
                    {
                      Acl = RtlULongLongAdd(v561, 4uLL, &v1007);
                      if ( Acl < 0 )
                        goto LABEL_1419;
                      Acl = RtlULongLongAdd(v1007, v562, &v1007);
                      if ( Acl < 0 )
                        goto LABEL_1419;
                      v561 = v1007;
                    }
                    while ( (unsigned int)(v563 + 1) < 4 );
                    Acl = RtlULongLongAdd(v1007, 4uLL, &v1007);
                    if ( Acl < 0 )
                    {
LABEL_1419:
                      v564 = v1108;
                      v565 = v1286;
                      goto LABEL_1420;
                    }
                    v565 = (void **)v1007;
                    v1108 = v564;
                    if ( !v564 )
                      v565 = 0LL;
                    v1286 = v565;
LABEL_1420:
                    if ( Acl < 0 )
                      goto LABEL_1501;
                    if ( v564 != 8 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1501;
                    }
                    v1077 = *v565;
                    v1243 = v1077;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_1501;
                v566 = 0LL;
                v567 = 0LL;
                if ( !v1243 )
                {
                  Acl = -1073741811;
                  goto LABEL_1501;
                }
                v568 = ObReferenceObjectByHandle(v1243, 0, (POBJECT_TYPE)IoFileObjectType, 1, &v928, 0LL);
                v569 = (struct _FILE_OBJECT *)v928;
                Acl = v568;
                if ( v568 < 0 )
                  goto LABEL_1456;
                v570 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1FuLL, 0x20534C53u);
                v566 = v570;
                if ( !v570 )
                {
                  Acl = -1073741801;
                  goto LABEL_1456;
                }
                *(_QWORD *)v570 = 0LL;
                *((_QWORD *)v570 + 1) = 0LL;
                *((_QWORD *)v570 + 2) = 0LL;
                *((_DWORD *)v570 + 6) = 0;
                v570[29] = 0;
                v570[4] = 25;
                *(_DWORD *)v570 = 0;
                strcpy(v570 + 5, "$Kernel.Purge.AppxFICac");
                strcpy(v570 + 29, "e");
                v571 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
                v567 = v571;
                if ( !v571 )
                {
                  Acl = -1073741801;
                  goto LABEL_1456;
                }
                *(_QWORD *)v571 = 0LL;
                *((_QWORD *)v571 + 1) = 0LL;
                *((_QWORD *)v571 + 2) = 0LL;
                *((_QWORD *)v571 + 3) = 0LL;
                *((_QWORD *)v571 + 4) = 0LL;
                *((_QWORD *)v571 + 5) = 0LL;
                *((_QWORD *)v571 + 6) = 0LL;
                v571[28] = 0;
                v572 = FsRtlQueryKernelEaFile(v569, (__int64)v571, 58, 1, (__int64)v566, 31, 0LL, 1, &v1109);
                Acl = v572;
                if ( v572 == -1073741275 )
                {
                  Acl = 0;
                }
                else
                {
                  if ( v572 < 0 )
                    goto LABEL_1456;
                  v573 = v567[3];
                  v574 = (__int64)v567 + *((unsigned __int8 *)v567 + 5) + 9;
                  v1077 = (void *)v574;
                  if ( v574 + v573 > (unsigned __int64)v567 + v1109 )
                  {
                    Acl = -1073741762;
                    goto LABEL_1456;
                  }
                  if ( (_WORD)v573 )
                  {
                    if ( (_DWORD)v573 != 24 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1456;
                    }
                    Source2 = 0LL;
                    if ( RtlCompareMemory((const void *)(v574 + 16), &Source2, 8uLL) != 8 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1456;
                    }
                    v555 = 2;
                    v575 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
                    if ( v575 )
                    {
                      v576 = FsRtlKernelFsControlFile(v569, 590068, 0LL, 0, v575, 0x248u, (ULONG *)&v919);
                      if ( v576 >= 0 )
                      {
                        if ( (unsigned int)v919 >= 0x40 )
                        {
                          v941.m128i_i64[0] = *v575;
                          v576 = FsRtlKernelFsControlFile(
                                   (PFILE_OBJECT)v928,
                                   590059,
                                   0LL,
                                   0,
                                   v575,
                                   0x248u,
                                   (ULONG *)&v919);
                          if ( v576 >= 0 )
                          {
                            if ( (unsigned int)v919 >= 0x40 )
                              v941.m128i_i64[1] = v575[3];
                            else
                              v576 = -1073741762;
                          }
                        }
                        else
                        {
                          v576 = -1073741762;
                        }
                      }
                      ExFreePoolWithTag(v575, 0x20534C53u);
                      if ( v576 >= 0 && *(_OWORD *)&v941 == *(_OWORD *)v1077 )
                        v555 = 3;
                      v569 = (struct _FILE_OBJECT *)v928;
                    }
                  }
                  else
                  {
                    Acl = 0;
                  }
                }
                v964 = v555;
LABEL_1456:
                if ( v569 )
                  ObfDereferenceObject(v569);
                if ( v566 )
                  ExFreePoolWithTag(v566, 0x20534C53u);
                if ( v567 )
                  ExFreePoolWithTag(v567, 0x20534C53u);
                if ( Acl >= 0 )
                {
                  v937 = 0;
                  v577 = RtlUIntAdd(4u, 8u, &v1110);
                  v578 = v1070;
                  Acl = v577;
                  if ( v577 >= 0 )
                    v578 = v1110;
                  v1070 = v578;
                  if ( v577 >= 0 )
                  {
                    Acl = RtlUIntAdd(0, v578, &v937);
                    if ( Acl >= 0 )
                    {
                      v579 = RtlUIntAdd(4u, 4u, &v1111);
                      Acl = v579;
                      if ( v579 >= 0 )
                        v580 = v1111;
                      v1070 = v580;
                      if ( v579 >= 0 )
                      {
                        Acl = RtlUIntAdd(v937, v580, &v937);
                        if ( Acl >= 0 )
                        {
                          uAugend[0] = v937;
                          if ( !v937 )
                          {
                            Acl = -1073741762;
                            goto LABEL_1501;
                          }
                          v581 = ExAllocatePoolWithTag(PagedPool, v937, 0x20534C53u);
                          if ( !v581 )
                          {
                            Acl = -1073741801;
                            goto LABEL_1501;
                          }
                          v582 = 0;
                          *(_QWORD *)&uAugend[1] = v581;
                          v894 = 0;
                          v1244 = v1289;
                          if ( &v1244 )
                          {
                            Acl = RtlULongLongAdd((ULONGLONG)v581, 4uLL, v1340);
                            if ( Acl >= 0 )
                            {
                              if ( v583 + 3 > (_DWORD *)((char *)v583 + uAugend[0]) )
                              {
                                Acl = -1073741789;
                                goto LABEL_1501;
                              }
                              v584 = (_QWORD *)v1340[0];
                              *v583 = 8;
                              *v584 = v1244;
                              v582 = ++v894;
                            }
                          }
                          else
                          {
                            Acl = -1073741811;
                          }
                          if ( Acl < 0 )
                            goto LABEL_2144;
                          v1032 = v964;
                          if ( !&v1032 )
                            goto LABEL_1499;
                          if ( !*(_QWORD *)&uAugend[1] )
                          {
                            v585 = RtlUIntAdd(4u, 4u, &v1112);
                            v586 = v965;
                            Acl = v585;
                            if ( v585 >= 0 )
                              v586 = v1112;
                            v965 = v586;
                            if ( v585 >= 0 )
                            {
                              Acl = RtlUIntAdd(uAugend[0], v586, uAugend);
                              if ( Acl >= 0 )
                              {
                                ++v894;
                                Acl = 0;
                              }
                            }
                            goto LABEL_1501;
                          }
                          v587 = *(UINT **)&uAugend[1];
                          v1207 = *(_QWORD *)&uAugend[1];
                          if ( !v582 )
                          {
LABEL_1495:
                            Acl = RtlULongLongAdd((ULONGLONG)v587, 4uLL, v1341);
                            if ( Acl >= 0 )
                            {
                              if ( (unsigned __int64)(v593 + 2) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                              {
                                v594 = (int *)v1341[0];
                                *v593 = v592;
                                *v594 = v1032;
                                ++v894;
                              }
                              else
                              {
                                Acl = -1073741789;
                              }
                            }
                            goto LABEL_1501;
                          }
                          while ( 1 )
                          {
                            v588 = RtlUIntAdd(4u, *v587, &v1113);
                            Acl = v588;
                            if ( v588 >= 0 )
                              v589 = v1113;
                            v965 = v589;
                            if ( v588 < 0 )
                              break;
                            Acl = RtlULongLongAdd(v590, v589, &v1207);
                            if ( Acl < 0 )
                              break;
                            v587 = (UINT *)v1207;
                            if ( v591 + 1 >= v582 )
                              goto LABEL_1495;
                          }
                        }
                      }
                    }
                  }
                }
LABEL_1501:
                if ( Acl < 0 )
                  goto LABEL_2144;
                goto LABEL_733;
              case 100:
                v320 = sub_1406C087C(v897, v126, v125, &v894);
                goto LABEL_732;
              case 101:
                v320 = sub_1406C0614(v897, v126, v125, &v894);
                goto LABEL_732;
              case 102:
                v320 = sub_1406BF234(v897, v126, v125, &v894);
                goto LABEL_732;
              case 103:
                v320 = sub_1406BCFBC(v897, v126, v125, &v894);
                goto LABEL_732;
              case 104:
                v320 = sub_1406BF57C(v897, v126, v125, &v894);
                goto LABEL_732;
              case 105:
                v320 = sub_140233260((__int64)v897, (__int64)v126, v125, (__int64)&v894);
                goto LABEL_732;
              case 106:
                v320 = sub_1406BEA18(v897, v126, v125, &v894);
                goto LABEL_732;
              case 107:
                v320 = sub_140232740((__int64)v897, (__int64)v126, v125, (__int64)&v894);
                goto LABEL_732;
              case 109:
                v1085 = 0LL;
                v1086 = 0LL;
                v1224 = 0LL;
                v1359 = 0uLL;
                if ( !v126 )
                {
                  Acl = -1073741811;
                  v5 = 0LL;
                  goto LABEL_2145;
                }
                if ( !v897[1] )
                {
                  Acl = -1073741811;
                  goto LABEL_1662;
                }
                if ( LODWORD(v897[0]) <= 3 )
                {
                  Acl = -1073741811;
                  goto LABEL_1662;
                }
                v645 = v897[1];
                v974 = v897[1];
                do
                {
                  Acl = RtlULongLongAdd(v645, 4uLL, &v974);
                  if ( Acl < 0 )
                    goto LABEL_1657;
                  Acl = RtlULongLongAdd(v974, v646, &v974);
                  if ( Acl < 0 )
                    goto LABEL_1657;
                  v645 = v974;
                }
                while ( (unsigned int)(v647 + 1) < 3 );
                Acl = RtlULongLongAdd(v974, 4uLL, &v974);
                if ( Acl < 0 )
                {
LABEL_1657:
                  v648 = v1121;
                  v649 = v1291;
                  goto LABEL_1658;
                }
                v649 = (_QWORD *)v974;
                v1121 = v648;
                if ( !v648 )
                  v649 = 0LL;
                v1291 = v649;
LABEL_1658:
                if ( Acl < 0 )
                  goto LABEL_182;
                if ( v648 != 8 )
                {
                  Acl = -1073741789;
                  goto LABEL_1855;
                }
                v1298 = *v649;
LABEL_1662:
                if ( Acl < 0 )
                  goto LABEL_182;
                if ( v897[1] )
                {
                  if ( LODWORD(v897[0]) > 4 )
                  {
                    v650 = v897[1];
                    v975 = v897[1];
                    do
                    {
                      Acl = RtlULongLongAdd(v650, 4uLL, &v975);
                      if ( Acl < 0 )
                        goto LABEL_1675;
                      Acl = RtlULongLongAdd(v975, v651, &v975);
                      if ( Acl < 0 )
                        goto LABEL_1675;
                      v650 = v975;
                    }
                    while ( (unsigned int)(v652 + 1) < 4 );
                    Acl = RtlULongLongAdd(v975, 4uLL, &v975);
                    if ( Acl < 0 )
                    {
LABEL_1675:
                      v653 = v1122;
                      v654 = v1292;
                      goto LABEL_1676;
                    }
                    v654 = (_DWORD *)v975;
                    v1122 = v653;
                    if ( !v653 )
                      v654 = 0LL;
                    v1292 = v654;
LABEL_1676:
                    if ( Acl < 0 )
                      goto LABEL_182;
                    if ( v653 != 4 )
                    {
                      Acl = -1073741789;
                      goto LABEL_1855;
                    }
                    v1126 = *v654;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_182;
                if ( v897[1] )
                {
                  if ( LODWORD(v897[0]) > 5 )
                  {
                    v655 = v897[1];
                    v976 = v897[1];
                    do
                    {
                      Acl = RtlULongLongAdd(v655, 4uLL, &v976);
                      if ( Acl < 0 )
                        goto LABEL_1693;
                      Acl = RtlULongLongAdd(v976, v656, &v976);
                      if ( Acl < 0 )
                        goto LABEL_1693;
                      v655 = v976;
                    }
                    while ( (unsigned int)(v657 + 1) < 5 );
                    Acl = RtlULongLongAdd(v976, 4uLL, &v976);
                    if ( Acl < 0 )
                    {
LABEL_1693:
                      v658 = v1040;
                      v659 = v1249;
                      goto LABEL_1694;
                    }
                    v659 = (const wchar_t *)v976;
                    v1040 = v658;
                    if ( !v658 )
                      v659 = 0LL;
                    v1249 = v659;
LABEL_1694:
                    if ( Acl < 0 )
                      goto LABEL_1851;
                    if ( !v658 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1712;
                    }
                    if ( (v658 & 1) != 0 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1712;
                    }
                    if ( v659[((unsigned __int64)v658 >> 1) - 1] )
                    {
                      Acl = -1073741762;
                      goto LABEL_1712;
                    }
                    if ( StringCbLengthW(v659, v658, &v1217) < 0 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1712;
                    }
                    if ( v1217 + 2 != v1040 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1712;
                    }
                    v1294 = (void *)v1249;
                    v1041 = v1217 >> 1;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_1851;
                v660 = 2 * v1041 + 2;
                if ( 2 * v1041 == -2 )
                {
                  Acl = -1073741762;
                }
                else
                {
                  v661 = v660;
                  v662 = ExAllocatePoolWithTag(PagedPool, v660, 0x20534C53u);
                  v663 = v662;
                  if ( v662 )
                  {
                    Acl = 0;
                    memmove(v662, v1294, v661);
                    v1306 = v1041;
                    v1085 = v663;
                  }
                  else
                  {
                    Acl = -1073741801;
                  }
                }
LABEL_1712:
                if ( Acl < 0 )
                  goto LABEL_1851;
                if ( v897[1] )
                {
                  if ( LODWORD(v897[0]) > 6 )
                  {
                    v664 = v897[1];
                    v977 = v897[1];
                    do
                    {
                      Acl = RtlULongLongAdd(v664, 4uLL, &v977);
                      if ( Acl < 0 )
                        goto LABEL_1725;
                      Acl = RtlULongLongAdd(v977, v665, &v977);
                      if ( Acl < 0 )
                        goto LABEL_1725;
                      v664 = v977;
                    }
                    while ( (unsigned int)(v666 + 1) < 6 );
                    Acl = RtlULongLongAdd(v977, 4uLL, &v977);
                    if ( Acl < 0 )
                    {
LABEL_1725:
                      v667 = v1042;
                      v668 = v1250;
                      goto LABEL_1726;
                    }
                    v668 = (const wchar_t *)v977;
                    v1042 = v667;
                    if ( !v667 )
                      v668 = 0LL;
                    v1250 = v668;
LABEL_1726:
                    if ( Acl < 0 )
                      goto LABEL_1851;
                    if ( !v667 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1744;
                    }
                    if ( (v667 & 1) != 0 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1744;
                    }
                    if ( v668[((unsigned __int64)v667 >> 1) - 1] )
                    {
                      Acl = -1073741762;
                      goto LABEL_1744;
                    }
                    if ( StringCbLengthW(v668, v667, &v1078) < 0 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1744;
                    }
                    if ( v1078 + 2 != v1042 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1744;
                    }
                    v1296 = (void *)v1250;
                    v1043 = v1078 >> 1;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_1851;
                v669 = 2 * v1043 + 2;
                if ( 2 * v1043 == -2 )
                {
                  Acl = -1073741762;
                }
                else
                {
                  v670 = v669;
                  v671 = ExAllocatePoolWithTag(PagedPool, v669, 0x20534C53u);
                  v672 = v671;
                  if ( v671 )
                  {
                    Acl = 0;
                    memmove(v671, v1296, v670);
                    v1251 = v1043;
                    v1086 = v672;
                  }
                  else
                  {
                    Acl = -1073741801;
                  }
                }
LABEL_1744:
                if ( Acl < 0 )
                  goto LABEL_1851;
                if ( !v897[1] || LODWORD(v897[0]) <= 7 )
                  goto LABEL_1850;
                v673 = v897[1];
                v978 = v897[1];
                while ( 1 )
                {
                  Acl = RtlULongLongAdd(v673, 4uLL, &v978);
                  if ( Acl < 0 )
                    break;
                  Acl = RtlULongLongAdd(v978, v674, &v978);
                  if ( Acl < 0 )
                    break;
                  v673 = v978;
                  if ( (unsigned int)(v675 + 1) >= 7 )
                  {
                    Acl = RtlULongLongAdd(v978, 4uLL, &v978);
                    if ( Acl >= 0 )
                    {
                      v677 = v978;
                      v1123 = v676;
                      if ( !v676 )
                        v677 = 0LL;
                      v1224 = v677;
                    }
                    break;
                  }
                }
                if ( Acl < 0 )
                  goto LABEL_1851;
                if ( LODWORD(v897[0]) > 8 )
                {
                  v678 = v897[1];
                  v998 = v897[1];
                  do
                  {
                    Acl = RtlULongLongAdd(v678, 4uLL, &v998);
                    if ( Acl < 0 )
                      goto LABEL_1766;
                    Acl = RtlULongLongAdd(v998, v679, &v998);
                    if ( Acl < 0 )
                      goto LABEL_1766;
                    v678 = v998;
                  }
                  while ( (unsigned int)(v680 + 1) < 8 );
                  Acl = RtlULongLongAdd(v998, 4uLL, &v998);
                  if ( Acl < 0 )
                  {
LABEL_1766:
                    v681 = v1124;
                    v682 = v1297;
                    goto LABEL_1767;
                  }
                  v682 = (_DWORD *)v998;
                  v1124 = v681;
                  if ( !v681 )
                    v682 = 0LL;
                  v1297 = v682;
LABEL_1767:
                  if ( Acl < 0 )
                    goto LABEL_1851;
                  if ( v681 != 4 )
                  {
                    Acl = -1073741789;
                    goto LABEL_1851;
                  }
                  v1125 = *v682;
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl >= 0 )
                {
                  if ( qword_1407473A8 )
                    v683 = qword_1407473A8(v1126, v1085, v1086);
                  else
                    v683 = -1073700223;
                  v684 = RtlUIntAdd(4u, 4u, &v1127);
                  v686 = v1044;
                  Acl = v684;
                  if ( v684 >= 0 )
                    v686 = v1127;
                  v1044 = v686;
                  if ( v684 >= 0 )
                  {
                    v936 = v686;
                    v687 = RtlUIntAdd(v685, 8u, &v1128);
                    v689 = v688;
                    Acl = v687;
                    if ( v687 >= 0 )
                      v689 = v1128;
                    v1044 = v689;
                    if ( v687 >= 0 )
                    {
                      v690 = RtlUIntAdd(v688, v689, &v936);
                      v691 = v930;
                      Acl = v690;
                      if ( v690 >= 0 )
                        v691 = v936;
                      v930 = v691;
                    }
                  }
                  if ( Acl >= 0 )
                  {
                    v692 = RtlUIntAdd(4u, 0x10u, &v1129);
                    v694 = v986;
                    Acl = v692;
                    if ( v692 >= 0 )
                      v694 = v1129;
                    v986 = v694;
                    if ( v692 >= 0 )
                    {
                      Acl = RtlUIntAdd(v693, v694, &v930);
                      if ( Acl >= 0 )
                      {
                        v1046 = 8;
                        Acl = RtlUIntAdd(8u, v930, &v1046);
                        if ( Acl >= 0 )
                        {
                          v696 = (v1046 + 7) & 0xFFFFFFF8;
                          if ( v696 >= v1046 )
                          {
                            v1047 = (v1046 + 7) & 0xFFFFFFF8;
                            v698 = RtlUIntAdd(v696, 8u, &v1047);
                            v697 = v986;
                            Acl = v698;
                            if ( v698 >= 0 )
                              v697 = v1047;
                          }
                          else
                          {
                            v697 = v986;
                            Acl = -1073741675;
                          }
                          if ( Acl < 0 )
                            goto LABEL_1851;
                          v910 = 4;
                          Acl = RtlUIntAdd(4u, v697, &v910);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlUIntAdd(v910, v699, &v910);
                            if ( Acl >= 0 )
                            {
                              Acl = RtlUIntAdd(v910, *((_DWORD *)v126 + 4), &v910);
                              if ( Acl >= 0 )
                              {
                                Acl = RtlUIntAdd(v910, 4u, &v910);
                                if ( Acl >= 0 )
                                {
                                  Acl = RtlUIntAdd(v910, *((_DWORD *)v126 + 8), &v910);
                                  v700 = v1176;
                                  if ( Acl >= 0 )
                                    v700 = v910;
                                  v1176 = v700;
                                }
                              }
                            }
                          }
                        }
                        if ( Acl < 0 )
                          goto LABEL_1851;
                        uAugend[0] = v695;
                        if ( !(_DWORD)v695 )
                        {
                          Acl = -1073741762;
                          goto LABEL_1851;
                        }
                        v701 = ExAllocatePoolWithTag(PagedPool, v695, 0x20534C53u);
                        if ( !v701 )
                        {
                          Acl = -1073741801;
                          goto LABEL_1851;
                        }
                        *(_QWORD *)&uAugend[1] = v701;
                        v702 = 0;
                        v894 = 0;
                        v1048 = v683 | 0x10000000;
                        if ( &v1048 )
                        {
                          Acl = RtlULongLongAdd((ULONGLONG)v701, 4uLL, v1346);
                          if ( Acl >= 0 )
                          {
                            if ( v704 + 2 > (_DWORD *)((char *)v704 + uAugend[0]) )
                            {
                              Acl = -1073741789;
                              goto LABEL_1851;
                            }
                            v705 = (int *)v1346[0];
                            *v704 = v703;
                            *v705 = v1048;
                            v702 = ++v894;
                          }
                        }
                        else
                        {
                          Acl = -1073741811;
                        }
                        if ( Acl >= 0 )
                        {
                          v1225 = v1298;
                          if ( &v1225 )
                          {
                            if ( *(_QWORD *)&uAugend[1] )
                            {
                              v709 = *(UINT **)&uAugend[1];
                              v710 = 0;
                              v1072 = *(_QWORD *)&uAugend[1];
                              if ( v702 )
                              {
                                while ( 1 )
                                {
                                  v711 = RtlUIntAdd(4u, *v709, &v1132);
                                  Acl = v711;
                                  if ( v711 >= 0 )
                                    v712 = v1132;
                                  v968 = v712;
                                  if ( v711 < 0 )
                                    break;
                                  Acl = RtlULongLongAdd(v713, v712, &v1072);
                                  if ( Acl < 0 )
                                    break;
                                  v709 = (UINT *)v1072;
                                  if ( ++v710 >= v702 )
                                    goto LABEL_1827;
                                }
                              }
                              else
                              {
LABEL_1827:
                                Acl = RtlULongLongAdd((ULONGLONG)v709, 4uLL, v1347);
                                if ( Acl >= 0 )
                                {
                                  if ( (unsigned __int64)(v714 + 3) > *(_QWORD *)&uAugend[1]
                                                                    + (unsigned __int64)uAugend[0] )
                                  {
                                    Acl = -1073741789;
                                    goto LABEL_1851;
                                  }
                                  v715 = (_QWORD *)v1347[0];
                                  *v714 = 8;
                                  *v715 = v1225;
                                  v702 = ++v894;
                                }
                              }
                            }
                            else
                            {
                              v706 = RtlUIntAdd(4u, 8u, &v1131);
                              v707 = v968;
                              Acl = v706;
                              if ( v706 >= 0 )
                                v707 = v1131;
                              v968 = v707;
                              if ( v706 >= 0 )
                              {
                                v708 = RtlUIntAdd(uAugend[0], v707, uAugend);
                                v702 = v894;
                                Acl = v708;
                                if ( v708 >= 0 )
                                {
                                  v702 = ++v894;
                                  goto LABEL_1833;
                                }
                              }
                            }
                          }
                          else
                          {
                            Acl = -1073741811;
                          }
                          if ( Acl < 0 )
                            goto LABEL_1851;
LABEL_1833:
                          if ( &v1359 )
                          {
                            if ( *(_QWORD *)&uAugend[1] )
                            {
                              v718 = *(UINT **)&uAugend[1];
                              v719 = 0;
                              i = *(_QWORD *)&uAugend[1];
                              if ( v702 )
                              {
                                while ( 1 )
                                {
                                  v720 = RtlUIntAdd(4u, *v718, &v1134);
                                  Acl = v720;
                                  if ( v720 >= 0 )
                                    v721 = v1134;
                                  v969 = v721;
                                  if ( v720 < 0 )
                                    break;
                                  Acl = RtlULongLongAdd(v722, v721, &i);
                                  if ( Acl < 0 )
                                    break;
                                  v718 = (UINT *)i;
                                  if ( ++v719 >= v723 )
                                    goto LABEL_1846;
                                }
                              }
                              else
                              {
LABEL_1846:
                                Acl = RtlULongLongAdd((ULONGLONG)v718, 4uLL, &v1348);
                                if ( Acl >= 0 )
                                {
                                  if ( (unsigned __int64)(v724 + 5) <= *(_QWORD *)&uAugend[1]
                                                                     + (unsigned __int64)uAugend[0] )
                                  {
                                    v725 = (_OWORD *)v1348;
                                    *v724 = 16;
                                    *v725 = v1359;
                                    ++v894;
                                  }
                                  else
                                  {
                                    Acl = -1073741789;
                                  }
                                }
                              }
                            }
                            else
                            {
                              v716 = RtlUIntAdd(4u, 0x10u, &v1133);
                              v717 = v969;
                              Acl = v716;
                              if ( v716 >= 0 )
                                v717 = v1133;
                              v969 = v717;
                              if ( v716 >= 0 )
                              {
                                Acl = RtlUIntAdd(uAugend[0], v717, uAugend);
                                if ( Acl >= 0 )
                                {
                                  ++v894;
                                  Acl = 0;
                                }
                              }
                            }
                            goto LABEL_1851;
                          }
LABEL_1850:
                          Acl = -1073741811;
                        }
                      }
                    }
                  }
                }
LABEL_1851:
                if ( v1085 )
                {
                  ExFreePoolWithTag(v1085, 0x20534C53u);
                  v1085 = 0LL;
                }
                if ( v1086 )
                {
                  ExFreePoolWithTag(v1086, 0x20534C53u);
                  v1086 = 0LL;
                }
LABEL_1855:
                if ( Acl >= 0 )
                  goto LABEL_733;
LABEL_182:
                v5 = 0LL;
                goto LABEL_2145;
              case 110:
                v320 = sub_1406BDC4C(v897, v126, v125, &v894);
                goto LABEL_732;
              case 111:
                v320 = sub_1406BC980(v897, v126, v125, &v894);
                goto LABEL_732;
              case 112:
                v320 = sub_1406BCBF8(v897, v126, v125, &v894);
                goto LABEL_732;
              case 113:
                v320 = SPCallServerHandleClepKdf((__int64)v897, (__int64)v126, v125, (__int64)&v894);
                goto LABEL_732;
              case 204:
                Acl = sub_1406C0AE4(v897, v126, v125, &v894);
                if ( Acl < 0 )
                  goto LABEL_2144;
                goto LABEL_733;
              case 205:
                v320 = sub_1406BC718(v897, v126, v125, &v894);
                goto LABEL_732;
              case 206:
                v1120 = 0;
                Acl = 0;
                v1248 = 8LL;
                ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1248, 8u, &v1120);
                if ( *((_DWORD *)v935 + 4) != 160 )
                  goto LABEL_1640;
                if ( !memcmp(qword_1406ED110, *((const void **)v935 + 3), 0xA0uLL)
                  && *((_DWORD *)v126 + 4) == 160
                  && !memcmp(qword_1406ED610, *((const void **)v126 + 3), 0xA0uLL)
                  && *((_DWORD *)v935 + 8) == 8
                  && **((_QWORD **)v935 + 5) == 0x5638EBB72F3355A5LL
                  && *((_DWORD *)v126 + 8) == 8
                  && **((_QWORD **)v126 + 5) == 0x9F2DD8784FE939B7uLL )
                {
                  goto LABEL_1642;
                }
                if ( !memcmp(qword_1406ED430, *((const void **)v935 + 3), 0xA0uLL)
                  && *((_DWORD *)v126 + 4) == 160
                  && !memcmp(qword_1406ED570, *((const void **)v126 + 3), 0xA0uLL)
                  && *((_DWORD *)v935 + 8) == 8
                  && **((_QWORD **)v935 + 5) == 0x5638EBB72F3355A5LL
                  && *((_DWORD *)v126 + 8) == 8
                  && **((_QWORD **)v126 + 5) == 0x9F2DD8784FE939B7uLL )
                {
                  goto LABEL_1641;
                }
                if ( memcmp(qword_1406ECDF0, *((const void **)v935 + 3), 0xA0uLL)
                  || *((_DWORD *)v126 + 4) != 160
                  || memcmp(qword_1406ED070, *((const void **)v126 + 3), 0xA0uLL)
                  || *((_DWORD *)v935 + 8) != 8
                  || **((_QWORD **)v935 + 5) != 0xF10D668DB2BB8BB9uLL
                  || *((_DWORD *)v126 + 8) != 8
                  || **((_QWORD **)v126 + 5) != 0x768DFD321621EA95LL )
                {
                  if ( memcmp(qword_1406ECB70, *((const void **)v935 + 3), 0xA0uLL)
                    || *((_DWORD *)v126 + 4) != 160
                    || memcmp(qword_1406ECD50, *((const void **)v126 + 3), 0xA0uLL)
                    || *((_DWORD *)v935 + 8) != 8
                    || **((_QWORD **)v935 + 5) != 0xF10D668DB2BB8BB9uLL
                    || *((_DWORD *)v126 + 8) != 8
                    || **((_QWORD **)v126 + 5) != 0x768DFD321621EA95LL )
                  {
LABEL_1640:
                    Acl = -2147024891;
                  }
LABEL_1641:
                  if ( Acl < 0 )
                    goto LABEL_2144;
                }
LABEL_1642:
                v320 = sub_140232D04((__int64)v897, (__int64)v126, v644, (__int64)&v894);
                goto LABEL_732;
              case 207:
                v320 = sub_1406BD5D4(v897, v126, v125, &v894);
                goto LABEL_732;
              case 208:
                v320 = sub_1406BE068(v897, v126, v125, &v894);
                goto LABEL_732;
              case 209:
                v1081 = 0LL;
                v1227 = 0LL;
                v1360 = 0uLL;
                if ( !v126 )
                {
                  Acl = -1073741811;
                  v5 = 0LL;
                  goto LABEL_2145;
                }
                if ( !v897[1] )
                {
                  Acl = -1073741811;
                  goto LABEL_1876;
                }
                if ( LODWORD(v897[0]) <= 3 )
                {
                  Acl = -1073741811;
                  goto LABEL_1876;
                }
                v726 = v897[1];
                v982 = v897[1];
                do
                {
                  Acl = RtlULongLongAdd(v726, 4uLL, &v982);
                  if ( Acl < 0 )
                    goto LABEL_1871;
                  Acl = RtlULongLongAdd(v982, v727, &v982);
                  if ( Acl < 0 )
                    goto LABEL_1871;
                  v726 = v982;
                }
                while ( (unsigned int)(v728 + 1) < 3 );
                Acl = RtlULongLongAdd(v982, 4uLL, &v982);
                if ( Acl < 0 )
                {
LABEL_1871:
                  v729 = v1135;
                  v730 = v1299;
                  goto LABEL_1872;
                }
                v730 = (_QWORD *)v982;
                v1135 = v729;
                if ( !v729 )
                  v730 = 0LL;
                v1299 = v730;
LABEL_1872:
                if ( Acl < 0 )
                  goto LABEL_182;
                if ( v729 != 8 )
                {
                  Acl = -1073741789;
                  goto LABEL_2002;
                }
                v1302 = *v730;
LABEL_1876:
                if ( Acl < 0 )
                  goto LABEL_182;
                if ( v897[1] )
                {
                  if ( LODWORD(v897[0]) > 4 )
                  {
                    v731 = v897[1];
                    v979 = v897[1];
                    do
                    {
                      Acl = RtlULongLongAdd(v731, 4uLL, &v979);
                      if ( Acl < 0 )
                        goto LABEL_1889;
                      Acl = RtlULongLongAdd(v979, v732, &v979);
                      if ( Acl < 0 )
                        goto LABEL_1889;
                      v731 = v979;
                    }
                    while ( (unsigned int)(v733 + 1) < 4 );
                    Acl = RtlULongLongAdd(v979, 4uLL, &v979);
                    if ( Acl < 0 )
                    {
LABEL_1889:
                      v734 = v1053;
                      v735 = v1226;
                      goto LABEL_1890;
                    }
                    v735 = (const wchar_t *)v979;
                    v1053 = v734;
                    if ( !v734 )
                      v735 = 0LL;
                    v1226 = v735;
LABEL_1890:
                    if ( Acl < 0 )
                      goto LABEL_2000;
                    if ( !v734 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1908;
                    }
                    if ( (v734 & 1) != 0 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1908;
                    }
                    if ( v735[((unsigned __int64)v734 >> 1) - 1] )
                    {
                      Acl = -1073741762;
                      goto LABEL_1908;
                    }
                    if ( StringCbLengthW(v735, v734, v1088) < 0 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1908;
                    }
                    if ( v1088[0] + 2 != v1053 )
                    {
                      Acl = -1073741762;
                      goto LABEL_1908;
                    }
                    v1301 = (void *)v1226;
                    v1066 = v1088[0] >> 1;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_2000;
                v736 = 2 * v1066 + 2;
                if ( 2 * v1066 == -2 )
                {
                  Acl = -1073741762;
                }
                else
                {
                  v737 = v736;
                  v738 = ExAllocatePoolWithTag(PagedPool, v736, 0x20534C53u);
                  v739 = v738;
                  if ( v738 )
                  {
                    Acl = 0;
                    memmove(v738, v1301, v737);
                    v1254 = v1066;
                    v1081 = v739;
                  }
                  else
                  {
                    Acl = -1073741801;
                  }
                }
LABEL_1908:
                if ( Acl < 0 )
                  goto LABEL_2000;
                if ( !v897[1] || LODWORD(v897[0]) <= 5 )
                  goto LABEL_1999;
                v740 = v897[1];
                v980 = v897[1];
                do
                {
                  Acl = RtlULongLongAdd(v740, 4uLL, &v980);
                  if ( Acl < 0 )
                    goto LABEL_1919;
                  Acl = RtlULongLongAdd(v980, v741, &v980);
                  if ( Acl < 0 )
                    goto LABEL_1919;
                  v740 = v980;
                }
                while ( (unsigned int)(v742 + 1) < 5 );
                Acl = RtlULongLongAdd(v980, 4uLL, &v980);
                if ( Acl < 0 )
                {
LABEL_1919:
                  v743 = v1136;
                  goto LABEL_1920;
                }
                v744 = v980;
                v1136 = v743;
                if ( !v743 )
                  v744 = 0LL;
                v1227 = v744;
LABEL_1920:
                if ( Acl >= 0 )
                {
                  if ( qword_1407473C0 )
                    v745 = qword_1407473C0(v1081, v1227, v743, &v1360);
                  else
                    v745 = -1073700223;
                  v746 = RtlUIntAdd(4u, 4u, &v1137);
                  v748 = v1050;
                  Acl = v746;
                  if ( v746 >= 0 )
                    v748 = v1137;
                  v1050 = v748;
                  if ( v746 >= 0 )
                  {
                    v921 = v748;
                    v749 = RtlUIntAdd(v747, 8u, &v1138);
                    v751 = v750;
                    Acl = v749;
                    if ( v749 >= 0 )
                      v751 = v1138;
                    v1050 = v751;
                    if ( v749 >= 0 )
                    {
                      v752 = RtlUIntAdd(v750, v751, &v921);
                      v753 = v932;
                      Acl = v752;
                      if ( v752 >= 0 )
                        v753 = v921;
                      v932 = v753;
                    }
                  }
                  if ( Acl >= 0 )
                  {
                    v754 = RtlUIntAdd(4u, 0x10u, &v1139);
                    v756 = v987;
                    Acl = v754;
                    if ( v754 >= 0 )
                      v756 = v1139;
                    v987 = v756;
                    if ( v754 >= 0 )
                    {
                      Acl = RtlUIntAdd(v755, v756, &v932);
                      if ( Acl >= 0 )
                      {
                        v1052 = 8;
                        Acl = RtlUIntAdd(8u, v932, &v1052);
                        if ( Acl >= 0 )
                        {
                          v758 = (v1052 + 7) & 0xFFFFFFF8;
                          if ( v758 >= v1052 )
                          {
                            v1054 = (v1052 + 7) & 0xFFFFFFF8;
                            v760 = RtlUIntAdd(v758, 8u, &v1054);
                            v759 = v987;
                            Acl = v760;
                            if ( v760 >= 0 )
                              v759 = v1054;
                          }
                          else
                          {
                            v759 = v987;
                            Acl = -1073741675;
                          }
                          if ( Acl < 0 )
                            goto LABEL_2000;
                          v911 = 4;
                          Acl = RtlUIntAdd(4u, v759, &v911);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlUIntAdd(v911, v761, &v911);
                            if ( Acl >= 0 )
                            {
                              Acl = RtlUIntAdd(v911, *((_DWORD *)v126 + 4), &v911);
                              if ( Acl >= 0 )
                              {
                                Acl = RtlUIntAdd(v911, 4u, &v911);
                                if ( Acl >= 0 )
                                {
                                  Acl = RtlUIntAdd(v911, *((_DWORD *)v126 + 8), &v911);
                                  v762 = v1141;
                                  if ( Acl >= 0 )
                                    v762 = v911;
                                  v1141 = v762;
                                }
                              }
                            }
                          }
                        }
                        if ( Acl < 0 )
                          goto LABEL_2000;
                        uAugend[0] = v757;
                        if ( !(_DWORD)v757 )
                        {
                          Acl = -1073741762;
                          goto LABEL_2000;
                        }
                        v763 = ExAllocatePoolWithTag(PagedPool, v757, 0x20534C53u);
                        if ( !v763 )
                        {
                          Acl = -1073741801;
                          goto LABEL_2000;
                        }
                        *(_QWORD *)&uAugend[1] = v763;
                        v764 = 0;
                        v894 = 0;
                        v1055 = v745 | 0x10000000;
                        if ( &v1055 )
                        {
                          Acl = RtlULongLongAdd((ULONGLONG)v763, 4uLL, v1309);
                          if ( Acl >= 0 )
                          {
                            if ( v766 + 2 > (_DWORD *)((char *)v766 + uAugend[0]) )
                            {
                              Acl = -1073741789;
                              goto LABEL_2000;
                            }
                            v767 = (int *)v1309[0];
                            *v766 = v765;
                            *v767 = v1055;
                            v764 = ++v894;
                          }
                        }
                        else
                        {
                          Acl = -1073741811;
                        }
                        if ( Acl >= 0 )
                        {
                          v1228 = v1302;
                          if ( &v1228 )
                          {
                            if ( *(_QWORD *)&uAugend[1] )
                            {
                              v771 = *(UINT **)&uAugend[1];
                              v772 = 0;
                              Src = *(void **)&uAugend[1];
                              if ( v764 )
                              {
                                while ( 1 )
                                {
                                  v773 = RtlUIntAdd(4u, *v771, &v1143);
                                  Acl = v773;
                                  if ( v773 >= 0 )
                                    v774 = v1143;
                                  v970 = v774;
                                  if ( v773 < 0 )
                                    break;
                                  Acl = RtlULongLongAdd(v775, v774, (ULONGLONG *)&Src);
                                  if ( Acl < 0 )
                                    break;
                                  v771 = (UINT *)Src;
                                  if ( ++v772 >= v764 )
                                    goto LABEL_1976;
                                }
                              }
                              else
                              {
LABEL_1976:
                                Acl = RtlULongLongAdd((ULONGLONG)v771, 4uLL, v1310);
                                if ( Acl >= 0 )
                                {
                                  if ( (unsigned __int64)(v776 + 3) > *(_QWORD *)&uAugend[1]
                                                                    + (unsigned __int64)uAugend[0] )
                                  {
                                    Acl = -1073741789;
                                    goto LABEL_2000;
                                  }
                                  v777 = (_QWORD *)v1310[0];
                                  *v776 = 8;
                                  *v777 = v1228;
                                  v764 = ++v894;
                                }
                              }
                            }
                            else
                            {
                              v768 = RtlUIntAdd(4u, 8u, &v1142);
                              v769 = v970;
                              Acl = v768;
                              if ( v768 >= 0 )
                                v769 = v1142;
                              v970 = v769;
                              if ( v768 >= 0 )
                              {
                                v770 = RtlUIntAdd(uAugend[0], v769, uAugend);
                                v764 = v894;
                                Acl = v770;
                                if ( v770 >= 0 )
                                {
                                  v764 = ++v894;
                                  goto LABEL_1982;
                                }
                              }
                            }
                          }
                          else
                          {
                            Acl = -1073741811;
                          }
                          if ( Acl < 0 )
                            goto LABEL_2000;
LABEL_1982:
                          if ( &v1360 )
                          {
                            if ( *(_QWORD *)&uAugend[1] )
                            {
                              v780 = *(UINT **)&uAugend[1];
                              v781 = 0;
                              v920 = *(_QWORD *)&uAugend[1];
                              if ( v764 )
                              {
                                while ( 1 )
                                {
                                  v782 = RtlUIntAdd(4u, *v780, &v1145);
                                  Acl = v782;
                                  if ( v782 >= 0 )
                                    v783 = v1145;
                                  v971 = v783;
                                  if ( v782 < 0 )
                                    break;
                                  Acl = RtlULongLongAdd(v784, v783, &v920);
                                  if ( Acl < 0 )
                                    break;
                                  v780 = (UINT *)v920;
                                  if ( ++v781 >= v785 )
                                    goto LABEL_1995;
                                }
                              }
                              else
                              {
LABEL_1995:
                                Acl = RtlULongLongAdd((ULONGLONG)v780, 4uLL, v1311);
                                if ( Acl >= 0 )
                                {
                                  if ( (unsigned __int64)(v786 + 5) <= *(_QWORD *)&uAugend[1]
                                                                     + (unsigned __int64)uAugend[0] )
                                  {
                                    v787 = (_OWORD *)v1311[0];
                                    *v786 = 16;
                                    *v787 = v1360;
                                    ++v894;
                                  }
                                  else
                                  {
                                    Acl = -1073741789;
                                  }
                                }
                              }
                            }
                            else
                            {
                              v778 = RtlUIntAdd(4u, 0x10u, &v1144);
                              v779 = v971;
                              Acl = v778;
                              if ( v778 >= 0 )
                                v779 = v1144;
                              v971 = v779;
                              if ( v778 >= 0 )
                              {
                                Acl = RtlUIntAdd(uAugend[0], v779, uAugend);
                                if ( Acl >= 0 )
                                {
                                  ++v894;
                                  Acl = 0;
                                }
                              }
                            }
                            goto LABEL_2000;
                          }
LABEL_1999:
                          Acl = -1073741811;
                        }
                      }
                    }
                  }
                }
LABEL_2000:
                if ( v1081 )
                {
                  ExFreePoolWithTag(v1081, 0x20534C53u);
                  v1081 = 0LL;
                }
LABEL_2002:
                if ( Acl >= 0 )
                  goto LABEL_733;
                goto LABEL_182;
              default:
                v1061 = -2147467263;
                if ( !&v1061 )
                {
                  Acl = -1073741811;
                  goto LABEL_2034;
                }
                if ( *(_QWORD *)&uAugend[1] )
                {
                  v790 = *(UINT **)&uAugend[1];
                  v912 = *(_QWORD *)&uAugend[1];
                  if ( v894 )
                  {
                    do
                    {
                      v791 = RtlUIntAdd(4u, *v790, &v988);
                      Acl = v791;
                      if ( v791 >= 0 )
                        v792 = v988;
                      v972 = v792;
                      if ( v791 < 0 )
                        goto LABEL_2034;
                      Acl = RtlULongLongAdd(v793, v792, &v912);
                      if ( Acl < 0 )
                        goto LABEL_2034;
                      v790 = (UINT *)v912;
                    }
                    while ( v794 + 1 < v894 );
                  }
                  Acl = RtlULongLongAdd((ULONGLONG)v790, 4uLL, v1312);
                  if ( Acl >= 0 )
                  {
                    if ( (unsigned __int64)(v796 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                      goto LABEL_1500;
                    v797 = (int *)v1312[0];
                    *v796 = v795;
                    *v797 = v1061;
                    ++v894;
                  }
                }
                else
                {
                  v788 = RtlUIntAdd(4u, 4u, &v1146);
                  v789 = v972;
                  Acl = v788;
                  if ( v788 >= 0 )
                    v789 = v1146;
                  v972 = v789;
                  if ( v788 >= 0 )
                  {
                    Acl = RtlUIntAdd(uAugend[0], v789, uAugend);
                    if ( Acl >= 0 )
                    {
                      ++v894;
                      goto LABEL_2035;
                    }
                  }
                }
LABEL_2034:
                if ( Acl < 0 )
                  goto LABEL_1501;
LABEL_2035:
                if ( uAugend[0] )
                {
                  v798 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
                  if ( v798 )
                  {
                    *(_QWORD *)&uAugend[1] = v798;
                    v894 = 0;
                    v1062 = -2147467263;
                    if ( &v1062 )
                    {
                      Acl = RtlULongLongAdd((ULONGLONG)v798, 4uLL, v1320);
                      if ( Acl >= 0 )
                      {
                        if ( v800 + 2 <= (_DWORD *)((char *)v800 + uAugend[0]) )
                        {
                          v801 = (int *)v1320[0];
                          *v800 = v799;
                          *v801 = v1062;
                          ++v894;
                        }
                        else
                        {
                          Acl = -1073741789;
                        }
                      }
                    }
                    else
                    {
LABEL_1499:
                      Acl = -1073741811;
                    }
                  }
                  else
                  {
                    Acl = -1073741801;
                  }
                }
                else
                {
                  Acl = -1073741762;
                }
                goto LABEL_1501;
            }
          }
          v127 = ExAllocatePoolWithTag(PagedPool, v116, 0x20534C53u);
          if ( !v127 )
          {
LABEL_218:
            Acl = -1073741801;
            goto LABEL_219;
          }
          v124[3] = v127;
          memmove(v127, v117, v116);
        }
        else
        {
          *((_DWORD *)v124 + 4) = 0;
          v124[3] = 0LL;
        }
        if ( v123 )
        {
          *((_DWORD *)v124 + 8) = v122;
          if ( !(_DWORD)v122 )
          {
            Acl = -1073741762;
            goto LABEL_219;
          }
          v128 = ExAllocatePoolWithTag(PagedPool, v122, 0x20534C53u);
          if ( !v128 )
            goto LABEL_218;
          v124[5] = v128;
          Acl = 0;
          memmove(v128, v123, v122);
        }
        else
        {
          *((_DWORD *)v124 + 8) = 0;
          v124[5] = 0LL;
        }
        v126 = v124;
        v942 = v124;
        goto LABEL_229;
      }
      Acl = 0;
    }
    if ( v103 )
      memmove(v104, v103, v102);
    v897[1] = v104;
    v897[0] = __PAIR64__(v102, v105);
    goto LABEL_168;
  }
LABEL_2144:
  v5 = v896;
LABEL_2145:
  v897[0] = 0LL;
  if ( v897[1] )
  {
    ExFreePoolWithTag((PVOID)v897[1], 0x20534C53u);
    v897[1] = 0LL;
  }
LABEL_2147:
  uAugend[0] = 0;
  v894 = 0;
  if ( *(_QWORD *)&uAugend[1] )
  {
    ExFreePoolWithTag(*(PVOID *)&uAugend[1], 0x20534C53u);
    *(_QWORD *)&uAugend[1] = 0LL;
  }
  if ( v1083 )
    ExFreePoolWithTag(v1083, 0x20534C53u);
  v885 = v935;
  if ( v935 )
  {
    v886 = (void *)*((_QWORD *)v935 + 1);
    if ( v886 )
    {
      ExFreePoolWithTag(v886, 0x20534C53u);
      v885[1] = 0LL;
    }
    v887 = (void *)v885[3];
    if ( v887 )
    {
      ExFreePoolWithTag(v887, 0x20534C53u);
      v885[3] = 0LL;
    }
    v888 = (void *)v885[5];
    if ( v888 )
    {
      ExFreePoolWithTag(v888, 0x20534C53u);
      v885[5] = 0LL;
    }
    ExFreePoolWithTag(v885, 0x20534C53u);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x20534C53u);
  v889 = v942;
  if ( v942 )
  {
    v890 = (void *)*((_QWORD *)v942 + 1);
    if ( v890 )
    {
      ExFreePoolWithTag(v890, 0x20534C53u);
      v889[1] = 0LL;
    }
    v891 = (void *)v889[3];
    if ( v891 )
    {
      ExFreePoolWithTag(v891, 0x20534C53u);
      v889[3] = 0LL;
    }
    v892 = (void *)v889[5];
    if ( v892 )
    {
      ExFreePoolWithTag(v892, 0x20534C53u);
      v889[5] = 0LL;
    }
    ExFreePoolWithTag(v889, 0x20534C53u);
  }
  if ( v981 )
    ExFreePoolWithTag(v981, 0x20534C53u);
  return (unsigned int)Acl;
}
